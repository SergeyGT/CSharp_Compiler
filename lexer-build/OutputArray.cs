namespace OutputArr
{
    public class M
    {
        public static void Main()
        {
            System.Console.Write("Enter array length: ");
            int length = System.Console.ReadInt();
				

            int[] array = new int[length];
			

             for (int i = 0; i < array.Length; ++i)
                 array[i] = System.Console.ReadInt();
		
			System.Console.Write("Array before sorting: ");
			
			System.Console.Write("[");
            for (int i = 0; i < array.Length; ++i)
            {
                System.Console.Write(array[i]);
                bool isLast = i == array.Length - 1;
                if (!isLast)
                {
                    System.Console.Write(", ");
                }
            }
            System.Console.WriteLine("]");
			
			
            for (int outer = 0; outer < array.Length; ++outer)
            {
                for (int inner = 0; inner < array.Length - 1; ++inner)
                {
                    if (array[inner] > array[inner + 1]) 
					{
						int temp = array[inner];
						array[inner] = array[inner + 1];
						array[inner + 1] = temp;
					}
                }
            }
			
			System.Console.Write("Array after sorting: ");
			
			System.Console.Write("[");
            for (int i = 0; i < array.Length; ++i)
            {
                System.Console.Write(array[i]);
                bool isLast = i == array.Length - 1;
                if (!isLast)
                {
                    System.Console.Write(", ");
                }
            }
            System.Console.WriteLine("]");
			
			
        }
    }
}