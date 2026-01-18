namespace Namespaces
{
    public class M
    {
        public static void Main()
        {
            First.ClassFirst first = new First.ClassFirst();
            Second.ClassSecond second = new Second.ClassSecond();
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
            System.Console.WriteLine("Namespace First");
        }
    }
}
namespace Second
{
    public class ClassSecond
    {
        public void Print()
        {
            System.Console.WriteLine("Namespace Second");
        }
    }
}