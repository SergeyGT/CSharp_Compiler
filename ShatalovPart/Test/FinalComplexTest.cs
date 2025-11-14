namespace CompilerTest.Syntax
{
    public class ComprehensiveTest : IDisposable
    {
        private static int staticCounter = 0;
        private string _name;
        
        public ComprehensiveTest(string name)
        {
            _name = name ?? "Default";
            staticCounter++;
        }
        
        public static void StaticMethod()
        {
            int local = staticCounter;
            Console.WriteLine($"Count: {local}");
        }
        
        public int Calculate(int a, int b)
        {
            return a + b;
        }
        
        public string Calculate(string a, string b)
        {
            return a + b;
        }
        
        public void TestAllFeatures()
        {
            // Локальные переменные
            int number = 100;
            char ch = '\t';
            string text = "Test\"String\n";
            
            // Вызовы методов
            int result1 = Calculate(5, 10);
            string result2 = Calculate("Hello, ", "World!");
            
            // Null-условный оператор
            string safeName = _name?.ToUpper();
            
            // Статический вызов
            ComprehensiveTest.StaticMethod();
        }
        
        public void Dispose()
        {
            // Финализатор/диспоз
        }
    }
}