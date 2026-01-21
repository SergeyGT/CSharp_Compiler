namespace Inher
{
    public class Parent
    {
        public int GetValue() { return 1; }
    }
    
    public class Child : Parent
    {
        public int GetValue() { return 2; }  
        
        public int GetParentValue() 
        { 
            return 1;  
        }
    }
    
    public class Test
    {
        public static void Main()
        {
            Child child = new Inher.Child();
            Parent parentView = new Inher.Parent;
            
            System.Console.WriteLine(child.GetValue());  // 2
            System.Console.WriteLine(parentView.GetValue());  // 1
            System.Console.WriteLine(child.GetParentValue());  // 1
			
            
        }
    }
}