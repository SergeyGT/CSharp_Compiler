using System;
namespace Test {	 
    public class Program {
        public static void Main() {

            Console.Write("[");
            for (int i = 0; i < array.Length; ++i)
            {
                Console.Write(array[i]);
                bool isLast = i == array.Length - 1;
                if (!isLast)
                {
                    Console.Write(", ");
                }
            }
        }
    }
}