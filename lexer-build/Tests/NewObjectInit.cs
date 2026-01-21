namespace InitObj {
    public class Program {
        public static void Main() {
            A newClass = new InitObj.A();
            System.Console.WriteLine(newClass.GetNum());
        }
    }
	
	public class A {
		public int a = 3;
		public int GetNum(){
			return a;
		}
	}
}