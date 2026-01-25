namespace NamespacesErr
{
    public class M
    {
        public static void Main()
        {
            var Second = new First.A();
            Second.B second = new Second.B();
            
            int y = Second.B;
			System.Console.WriteLine(y);
			}
    }
}
namespace First
{
    public class A
    {
        public int B = 5;
        public void Print()
        {
            System.Console.WriteLine("Namespace First1");
        }    
    }
}
namespace Second
{
    public class B
    {
        public void Print()
        {
            System.Console.WriteLine("Namespace Second2");
        }
    }
}
