namespace Fib
{
    public class M
    {
        public int Fib(int n)
        {
            return n;
        }

        public static void Main()
        {

            System.Console.Write("Enter n: ");
            int n = System.Console.ReadInt();

            M main = new Fib.M;
            System.Console.Write("Fib(n) = ");
            System.Console.WriteLine(main.Fib(n));
        }
    }
}