// Тест на пространства имен

// Тест с using директивой
using MyApplication.Math;

public class NamespaceTest
{
    public void TestNamespaces()
    {
        // Полное имя
        int result1 = MyApplication.Math.Calculator.Add(2, 3);
        
        // С использованием using
        int result2 = Calculator.Add(4, 5);
    }
}



namespace MyApplication.Math
{
    public class Calculator
    {
        public static int Add(int a, int b)
        {
            return a + b;
        }
    }
}

namespace MyApplication.UI
{
    public class Renderer
    {
        public void Render()
        {
            int result = Math.Calculator.Add(5, 3);
        }
    }
}

