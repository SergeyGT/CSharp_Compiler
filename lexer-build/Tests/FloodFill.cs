namespace FloodFill
{
    public class M
    {
        public int SIZE = 10;
        private int[] grid = new int[SIZE * SIZE];
        
        public void PrintGrid()
        {
            for (int y = 0; y < SIZE; y=y+1)
            {
                for (int x = 0; x < SIZE; x=x+1)
                {
                    System.Console.Write(grid[y * SIZE + x]);
					System.Console.Write(" ");
                }
                System.Console.WriteLine("");
            }
            System.Console.WriteLine("");
        }
        
        public void Fill(int x, int y, int fillValue)
		{
			if (x < 0 || x >= SIZE || y < 0 || y >= SIZE)
				return;
				
			int index = y * SIZE + x;
			int target = grid[index];
			
			if (target == fillValue)
				return;
				
			grid[index] = fillValue;
			
			if (x + 1 < SIZE && grid[y * SIZE + (x + 1)] == target)
				Fill(x + 1, y, fillValue);
			if (x - 1 >= 0 && grid[y * SIZE + (x - 1)] == target)
				Fill(x - 1, y, fillValue);
			if (y + 1 < SIZE && grid[(y + 1) * SIZE + x] == target)
				Fill(x, y + 1, fillValue);
			if (y - 1 >= 0 && grid[(y - 1) * SIZE + x] == target)
				Fill(x, y - 1, fillValue);
		}
        
        public static void Main()
        {
            M m = new FloodFill.M();
            
            for (int i = 0; i < m.grid.Length; i=i+1)
                m.grid[i] = 0;
                
            for (int i = 0; i < 10; i=i+1)
            {
                m.grid[i] = 1;                      
                m.grid[(10 - 1) * 10 + i] = 1;  
                m.grid[i * 10] = 1;               
                m.grid[i * 10 + 10 - 1] = 1;    
            }
            
            System.Console.WriteLine("Исходное поле:");
            m.PrintGrid();
            
            m.Fill(2, 2, 2);
            
            System.Console.WriteLine("После заливки:");
            m.PrintGrid();
        }
    }
}