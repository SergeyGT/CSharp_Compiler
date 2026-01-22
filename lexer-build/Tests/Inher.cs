namespace Inher
{
    public class Parent
    {
		protected int y = 0;
        public int GetValue() { return 1; }
    }
    
    public class Child : Parent
    {
        public int GetValue() { return 2; }  
        
        public int GetParentValue() 
        { 
            System.Console.WriteLine(y);
        }
    }
    
    public class Test
    {
        public static void Main()
        {
            Child child = new Inher.Child();
            Parent parentView = new Inher.Parent;
            
            
			
            
        }
    }
}