namespace Fib
{
    public class M
    {
         public int Fib(int n, int[] arr)
        {
            if (n <= 0 || arr.Length < n){
			return 1;}
            
            if (n >= 1){
			arr[0] = 0;}
            if (n >= 2){
			arr[1] = 1;}
            
            for (int i = 2; i < n; i=i+1)
            {
                arr[i] = arr[i - 1] + arr[i - 2];
            }
			return 0;
        }


        public static void Main()
        { 
			System.Console.Write("Enter n: ");
            int n = System.Console.ReadInt();
            
            M main = new Fib.M();
			
			int[] arr3 = new int[n + 1];
            main.Fib(n+1, arr3);
            System.Console.Write("Filled array: ");
            for (int i = 0; i <= n; i=i+1)
            {
                System.Console.Write(arr3[i]);
            }
        }
    }
}