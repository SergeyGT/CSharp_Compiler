namespace Fib
{
    public class M
    {
         public int Fib(int n)
        {
            if (n == 0)
                return 0;
            if (n == 1)
                return 1;

            return Fib(n - 1) + Fib(n - 2);
        }


        public static void Main()
        {

            System.Console.Write("Enter n: ");
            int n = System.Console.ReadInt();

            M main = new Fib.M();
            System.Console.Write("Fib(n) = ");
            System.Console.WriteLine(main.Fib(n));
        }
    }
}