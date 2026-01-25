namespace Namespaces
{
    public class M
    {
        public static void Main()
        {
            var Second = new First.A();
            var second = new Second.B();
            Second.B();
        }
    }
}
namespace First
{
    public class A
    {
        public void Print()
        {
            System.Console.WriteLine("Namespace First1");
        }
		public void B()
        {
            System.Console.WriteLine("Print B");
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