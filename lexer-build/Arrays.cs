
namespace IntArray
{
    
    public class M
    {
        public static void Main()
        {
            int[] array = new int[10];

            for (int i = 0; i < 9; i = i + 1)
            {
                array[i] = i; 
				System.Console.WriteLine(i);
            }
        }
    }
}