namespace InitObj {
    public class Program {
        public static void Main() {
            A newClass = new InitObj.A();
            System.Console.WriteLine(10+10);
        }
    }
	
	public class A {
		public A(){
		}
		public int GetNum(){
			return 8;
		}
	}
}