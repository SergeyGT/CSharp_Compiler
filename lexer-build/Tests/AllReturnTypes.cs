namespace ReturnTest
{
    public class TestClass
    {
		public static void Main()
        {
		}
        
        private int GetNumber()
        {
            return 42;
        }
        
        public int ReturnVariable()
        {
            int x = 100;
            return x;
        }
        
        public void ReturnVoid()
        {
            return;
        }
        
        public int ReturnExpression()
        {
            return 2 + 2;
        }
        
        public int ReturnComplexExpression()
        {
            int a = 5;
            int b = 3;
            return (a * b) + (a - b);
        }
        
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
			return " ";
        }
        
        public int ReturnMethodWithArgs()
        {
            return Multiply(4, 5);
        }
        
        private int Multiply(int x, int y)
        {
            return x * y;
        }
        
}
}