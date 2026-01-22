namespace ChangeField
{
    public class M
    {
		public int field = 3;
		public string str = "hello";
		
			public void ChangeInt(int x, M y, string str, int[] arr){
				
				x = 20;
				str = "goodbye";
				y.field = 6;
				arr[0] = 2;
				
				System.Console.WriteLine("Function changing:");
				System.Console.WriteLine(x);				
				System.Console.WriteLine(str);
				System.Console.WriteLine(y.field);
				System.Console.WriteLine(arr[0]);
			}
			

			public static void Main()
			{
				M m = new ChangeField.M();
				
				int[] arr = new int[1];
				arr[0] = 1;
				string str = "hello";
				int x = 10;
				
				m.ChangeInt(x, m, str, arr);
				System.Console.WriteLine("Outside function:");
				System.Console.WriteLine(x);
				System.Console.WriteLine(str);
				System.Console.WriteLine(m.field);
				System.Console.WriteLine(arr[0]);
			}
    }
}