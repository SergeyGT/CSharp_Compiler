namespace ClassObj
{
	public class X {
		public int GetNum(){
			return 0;
		}
	}
	
    public class M
    {
        public static void Main()
        {
            X cla = new ClassObj.X();
			int x = cla.GetNum();
			System.Console.WriteLine(x);
        }
    }
	
	
}