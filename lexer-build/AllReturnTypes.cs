namespace ReturnTest
{
    public class TestClass
    {
        // 1. return func() - возврат результата вызова функции
        public int ReturnFunction()
        {
            return GetNumber();
        }
        
        private int GetNumber()
        {
            return 42;
        }
        
        // 2. return var; - возврат переменной
        public int ReturnVariable()
        {
            int x = 100;
            return x;
        }
        
        // 3. return ; - возврат без значения (void метод)
        public void ReturnVoid()
        {
            return;
        }
        
        // 4. return 2+2; - возврат выражения
        public int ReturnExpression()
        {
            return 2 + 2;
        }
        
        // 5. return с более сложным выражением
        public int ReturnComplexExpression()
        {
            int a = 5;
            int b = 3;
            return (a * b) + (a - b);
        }
        
        // 6. return в условном операторе
        public string ReturnConditional(int value)
        {
            if (value > 0)
            {
                return "Positive";
            }
            else
            {
                return "Non-positive";
            }
        }
        
        // 7. return с вызовом метода с параметрами
        public int ReturnMethodWithArgs()
        {
            return Multiply(4, 5);
        }
        
        private int Multiply(int x, int y)
        {
            return x * y;
        }
        
        // 8. return null
        public int ReturnNull()
        {
            return null;
        }
        
        // 9. return new object()
        public int ReturnNewObject()
        {
            return new A();
        }
        
        // 10. return с цепочкой вызовов
        public string ReturnChain()
        {
            return GetPrefix() + GetSuffix();
        }
}
}