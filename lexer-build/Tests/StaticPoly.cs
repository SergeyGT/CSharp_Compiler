namespace Poly
{
    public class Parent
    {
        public static int GetValue(int x) { return 1; }
    }
    
    public class Child : Parent
    { 
        public int GetNum() 
        { 
          return base.GetValue(3); 
        }
    }
    
    public class Test
    {
        public static void Main()
        {
            Child child = new Poly.Parent();
            int x = child.GetValue();
            System.Console.WriteLine(x);
        }
    }
}