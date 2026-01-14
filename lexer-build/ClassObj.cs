namespace ClassObj
{
    public class M
    {
        public static void Main()
        {
            X cla = new ClassObj.X();
			cla.GetNum();
        }
    }
	
	public class X {
		public int GetNum(){
			return 3;
		}
	}
}