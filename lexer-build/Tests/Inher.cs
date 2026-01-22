namespace Inher
{
    public class Parent
    {
        public int GetValue(int x) { return 1; }
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
            Child child = new Inher.Child();
            int x = child.GetNum();
            System.Console.WriteLine(x);
        }
    }
}