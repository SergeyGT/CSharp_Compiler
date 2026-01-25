namespace Poly
{
    public class Parent
    {
        public static int GetValue(int x) { return 1; }
    }
    
    public class Child : Parent
    { 
       
    }
    
    public class Test
    {
        public static void Main()
        {
            int x = Child.GetValue();
            System.Console.WriteLine(x);
        }
    }
}