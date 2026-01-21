namespace FactorialTest
{
    public class Factorial
    {
        public int Calculate(int n)
        {
            if (n <= 1)
            {
                return 1;
            }
            return n * Calculate(n - 1);
        }

        public static void Main()
        {
            var f = new FactorialTest.Factorial();
            
            System.Console.WriteLine("Testing factorial calculations:");
			int num = System.Console.ReadInt();
			System.Console.WriteLine(f.Calculate(num));
		}
	}
}