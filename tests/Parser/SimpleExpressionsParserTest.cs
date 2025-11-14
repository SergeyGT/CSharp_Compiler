class ExpressionTests {
    void TestExpressions() {
        // Арифметические операции
        int x = 15;
        int y = 3;
        int sum = x + y;
        int difference = x - y;
        int product = x * y;
        int quotient = x / y;
        
        // Операции сравнения
        bool test1 = x == y;
        bool test2 = x != y;
        bool test3 = x > y;
        bool test4 = x < y;
        
        // Присваивание
        int result = (x + y) * 2 - 5;
        
        // Комбинированные выражения
        bool complex = (x > 10) && (y < 5) || (result == 31);
    }
}