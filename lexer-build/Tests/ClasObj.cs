namespace ClasObj
{
	public class X {
		public int num = 5;
		private int x = 10;
		protected int y = 20;
		
		public int GetNum(){
			return num;
		}
	}
	
	public class Y : X{
		public void GetProt(){
			System.Console.WriteLine("protected ");
			System.Console.WriteLine(20);
		}
	}
	
    public class M
    {
        public static void Main()
        {
            X cla = new ClasObj.X();
			System.Console.WriteLine("public ");
			System.Console.WriteLine(cla.num);
			
			Y y = new ClasObj.Y();
			cla.y;
			
        }
    }
	
	
}