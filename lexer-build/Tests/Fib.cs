namespace Fib
{
    public class M
    {
         public int Fib(int n, int[] arr)
        {
            
            if (n < 0)
                return 0;
            
            if (n == 0)
            {
                arr[0] = 1;
                return 1;
            }
            if (n == 1)
            {
                arr[0] = 1;
                arr[1] = 1;
                return 1;
            }
            
            if (arr[n] != 0)
                return arr[n];
            
            int fib1 = Fib(n - 1, arr);
            int fib2 = Fib(n - 2, arr);
            arr[n] = fib1 + fib2;
            
            return arr[n];
        }


        public static void Main()
        { 
			System.Console.Write("Enter n: ");
            int n = System.Console.ReadInt();
            
            M main = new Fib.M();
			
			int[] arr3 = new int[n + 1];
            main.Fib(n, arr3);
            System.Console.Write("Filled array: ");
            for (int i = 0; i <= n; i=i+1)
            {
                System.Console.Write(arr3[i]);
				System.Console.Write(" ");
            }
        }
    }
}