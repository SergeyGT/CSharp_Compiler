namespace OperatorOverload
{
    public class B
    {
        public static int operator+(B lhs, C rhs)
        {
            return 5;
        }
    }

    public class C
    {
        public static int operator+(C lhs, B rhs)
        {
            return 10;
        }
    }

    public class Main
    {
        public static void Main()
        {
            B var1 = new OperatorOverload.B();
            C var2 = new OperatorOverload.C();

            System.Console.WriteLine(var1 + var2);
            System.Console.WriteLine(var2 + var1);
        }
    }
}