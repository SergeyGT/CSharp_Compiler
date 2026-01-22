namespace ShortCircuit
{
    public class Circuit
    {
        public bool Hi(bool a)
        {
            System.Console.WriteLine("hello");
            return a;
        }

        public static void Main()
        {
            var circuit = new ShortCircuit.Circuit();

            System.Console.WriteLine("Введите число: ");
            int number = System.Console.ReadInt();
            if (number > 10 && circuit.Hi(true))
            {
                System.Console.WriteLine("number > 10 && hi(true)");
            }
			else{
				System.Console.WriteLine("number > 10 && hi(true) вывел false");
			}


            if (number > 5 && circuit.Hi(true))
            {
                System.Console.WriteLine("number > 5 && hi(true)");
            }
			else{
				 System.Console.WriteLine("number > 5 && hi(true) вывел false");
			}

            if (number > 10 || circuit.Hi(true))
            {
                System.Console.WriteLine("number > 10 || hi(true)");
            }
			else{
				 System.Console.WriteLine("number > 10 || hi(true) вывел false");
			}

            if (number > 5 || circuit.Hi(true))
            {
                System.Console.WriteLine("number > 5 || hi(true)");
            }
			else{
				 System.Console.WriteLine("number > 5 || hi(true) вывел false");
			}

            if (number > 10 && circuit.Hi(false))
            {
                System.Console.WriteLine("number > 10 && hi(false)");
            }
			else{
				 System.Console.WriteLine("number > 10 && hi(false) вывел false");
			}

            if (number > 5 && circuit.Hi(false))
            {
                System.Console.WriteLine("number > 5 && hi(false)");
            }
			else{
				 System.Console.WriteLine("number > 5 && hi(false) вывел false");
			}

            if (number > 10 || circuit.Hi(false))
            {
                System.Console.WriteLine("number > 10 || hi(false)");
            }
			else{
				 System.Console.WriteLine("number > 10 || hi(false) вывел false");
			}

            if (number > 5 || circuit.Hi(false))
            {
                System.Console.WriteLine("number > 5 || hi(false)");
            }
			else{
				 System.Console.WriteLine("number > 5 || hi(false) вывел false");
			}
        }
    }
}