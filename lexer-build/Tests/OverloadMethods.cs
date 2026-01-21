namespace OverloadMethods
{
    public class M
    {
		public int y = 10;
        public static void Main()
        {
            M m = new OverloadMethods.M();
			M m2 = new OverloadMethods.M();
			m.Print();
			m.Print(1);
			m.Print(1,1);
			m2.Print(m);
			if(!(m.Print(1)>3)){
				System.Console.WriteLine("No");
			}
        }
		
		public void Print(){
			System.Console.WriteLine("Empty");
		}
		public int Print(int a){
			System.Console.WriteLine(a);
			return 1;
		}
		public void Print(int a, int b){
			System.Console.WriteLine(a+b);
		}
		
		public void Print(M clM){
			clM.Print(3);
		}
    }
	
	
}