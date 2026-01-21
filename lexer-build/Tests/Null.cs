namespace Null
{
    public class M
    {
        public void Foo()
        {
            System.Console.WriteLine("Foo");
        }
        public static void Main()
        {
            M m = new Null.M();
            m.Foo();
            m = null;
            m.Foo();
        }
    }
}