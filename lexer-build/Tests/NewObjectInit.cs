namespace InitObj {
    public class Program {
        public static void Main() {
            A newClass = new InitObj.A();
            System.Console.WriteLine(newClass.GetNum());
			System.Console.WriteLine()
        }
    }
	
	public class A {
		private int a = 3;
		public int GetNum(){
			return a;
		}
	}
}