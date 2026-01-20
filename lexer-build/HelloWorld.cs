namespace HelloWorld
{
    public class M
    {
        public static void Main()
        {
			string name = "Alice";
            int age = 25;
			N num = new HelloWorld.N();
            int y = num.x;
            System.Console.WriteLine(y);
        }
    }
	
	public class N {
		public int x =3;
	}
	
}