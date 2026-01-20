namespace Var
{
    public class M
    {

			public static void Main()
			{
				N n = new Var.N();
				n.Print();
			}
    }
	
	public struct N {
		public int x = 3;
		public void Print(){
			System.Console.WriteLine(2);
		}
	}
}