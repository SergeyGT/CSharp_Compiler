namespace VariableScoping
{
    public class M
    {
        public static void Main()
        {
            int number = System.Console.ReadInt();

            if (number < 0)
            {
                int i = -1;
                System.Console.WriteLine(i);
            } 
            else if (number == 0)
            {
                int i = 0;
                System.Console.WriteLine(i);
            }
            else 
            {
                int i = 1;
                System.Console.WriteLine(i);
            }
        }
    }
}