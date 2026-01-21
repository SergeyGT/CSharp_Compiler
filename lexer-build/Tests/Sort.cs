namespace Sort
{
    public class M
    {
        public void PrintArray(int[] array)
        {
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

        public void SortArray(int[] array)
        {
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
        }

        public static void Main()
        {
            System.Console.Write("Enter array length: ");
            int length = System.Console.ReadInt();
				
			//int length = 5;

            int[] array = new int[length];
			

             for (int i = 0; i < array.Length; ++i)
                 array[i] = System.Console.ReadInt();
		
			M m = new Sort.M();

            System.Console.Write("The array before sorting: ");
            m.PrintArray(array);

            m.SortArray(array);
            System.Console.Write("The array after sorting: ");
            m.PrintArray(array);
        }
    }
}