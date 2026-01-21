
namespace ComplexArray
{
    
    public class M
    {
        public static void Main()
        {
            int[][] array = new int[10][10];

            for (int i = 0; i < 10; i = i + 1)
            {
                for (int j = 0; j < 10; j = j + 1){
					array[i][j] = j; 
					System.Console.WriteLine(j);
				}
            }
        }
    }
}