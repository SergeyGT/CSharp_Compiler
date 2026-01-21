namespace Logical
{
    public class M
    {
        public bool First(int first)
        {
            System.Console.WriteLine("First");
            return false;
        }

        public bool Second(int second)
        {
            System.Console.WriteLine("Second");
            return true;
        }

        public static void Main()
        {
            M m = new Logical.M();
            if (m.Second(1) && m.First(2))
            {
                System.Console.WriteLine("first");
            }

            if (m.Second(1) || m.First(2))
            {
                System.Console.WriteLine("second");
            }
        }
    }
}