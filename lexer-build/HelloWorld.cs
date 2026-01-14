namespace HelloWorld
{
    public class M
    {
        public static void Main()
        {
			string name = "Alice";
            int age = 25;
			int num = new HelloWorld.N();
            
            System.Console.WriteLine(num.x);
        }
    }
	
	public class N {
		private int x =3;
	}
	
}