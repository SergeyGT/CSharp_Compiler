// namespace Test
// {
    // public class Program
    // {
        // public static void Main()
        // {
            // Cl1 System = new Test.Cl1();
            // int y = System.Console;
            // System.Console.WriteLine("Hello");  
        // }
    // }

    // public class Cl1
    // {
        // public int Console = 5;
    // }
// }

namespace Test
{
    public class Program
    {
        public static void Main()
        {
            Cl1 System = new Test.Cl1();
            int y = System.Console.WriteLine();
            System.Console.WriteLine("Hello");  
        }
    }

    public class Cl1
    {
        public Cl2 Console = new Test.Cl2();
    }

    public class Cl2
    {
        public int WriteLine()
        {
            return 5;
        }
    }
}