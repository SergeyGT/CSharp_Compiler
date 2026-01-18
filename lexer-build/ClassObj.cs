namespace ClassObj
{
	public class X {
		public int num = 5;
		public int GetNum(){
			return num;
		}
	}
	
    public class M
    {
        public static void Main()
        {
            X cla = new ClassObj.X();
			System.Console.WriteLine(cla.GetNum());
        }
    }
	
	
}