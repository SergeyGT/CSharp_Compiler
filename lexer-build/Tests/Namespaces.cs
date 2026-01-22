namespace Namespaces
{
    public class M
    {
        public static void Main()
        {
            var first = new First.ClassFirst();
            var second = new Second.ClassFirst();
            first.Print();
            second.Print();
        }
    }
}
namespace First
{
    public class ClassFirst
    {
        public void Print()
        {
            System.Console.WriteLine("Namespace First1");
        }
    }
}
namespace Second
{
    public class ClassFirst
    {
        public void Print()
        {
            System.Console.WriteLine("Namespace Second2");
        }
    }
}