// Пространства имен
namespace MyApp.Core {
    // Интерфейсы
    interface ILogger {
        void Log(string message);
        void Log(int number);
    }
    
    interface ICalculator {
        int Calculate(int x, int y);
        string Calculate(string a, string b);
    }
}

namespace MyApp.Models {
    using MyApp.Core;
    
    // Класс, реализующий интерфейсы
    class Calculator : ICalculator, ILogger {
        // Локальные переменные разных типов
        private int result;
        private char operation;
        private string history;
        
        // Перегруженные методы
        public int Calculate(int x, int y) {
            // Арифметические операции
            int sum = x + y;
            int diff = x - y;
            int product = x * y;
            int quotient = x / y;
            
            // Операции сравнения
            bool isEqual = x == y;
            bool isGreater = x > y;
            bool isNotEqual = x != y;
            
            // Присваивание
            result = sum;
            return result;
        }
        
        public string Calculate(string a, string b) {
            // Строковые операции
            string combined = a + b;
            history = combined;
            return combined;
        }
        
        // Перегруженные методы логирования
        public void Log(string message) {
            string formatted = "LOG: " + message;
            // null-условный оператор
            history?.ToString();
        }
        
        public void Log(int number) {
            string numStr = number.ToString();
            Log(numStr);
        }
        
        // Метод с разными типами параметров
        public void ProcessData(int num, char symbol, string text) {
            // Локальные переменные
            int localInt = num * 2;
            char localChar = symbol;
            string localString = text + " processed";
            
            // Выражения с переменными
            int calculated = (localInt + 5) * 3;
            bool isValid = calculated > 10 && localString != null;
            
            // Присваивание
            result = calculated;
            operation = localChar;
        }
    }
}

namespace MyApp.Utils {
    // Функции (процедуры) с разными типами
    class StringHelper {
        public static string Concat(string str1, string str2) {
            return str1 + str2;
        }
        
        public static string Concat(string str, int number) {
            return str + number.ToString();
        }
        
        public static void PrintMessage() {
            string message = "Hello World!";
            char exclamation = '!';
            int length = message.Length;
            
            // null-условный оператор для метода
            message?.ToString();
        }
    }
}

// Основной класс программы
class Program {
    static void Main() {
        /* 
           Многострочный комментарий
           с разными конструкциями
        */
        MyApp.Models.Calculator calc = new MyApp.Models.Calculator();
        
        // Целочисленные операции
        int a = 10;
        int b = 5;
        int result1 = calc.Calculate(a, b);
        
        // Строковые операции  
        string s1 = "Hello";
        string s2 = "World";
        string result2 = calc.Calculate(s1, s2);
        
        // Символьные литералы
        char newline = '\n';
        char tab = '\t';
        char quote = '\'';
        char unicodeChar = '\u0061'; // 'a'
        
        // Строковые литералы с escape-последовательностями
        string path = "C:\\Users\\File.txt";
        string message = "Line1\nLine2\tTabbed";
        string verbatim = @"C:\Users\File.txt";
        
        // Числовые литералы
        int decimalNum = 123;
        int largeNum = 1_000_000;
        
        // Вызов методов
        calc.Log("Calculation completed");
        calc.Log(42);
        
        // null-условные операторы
        string nullableString = null;
        int? length = nullableString?.Length;
        
        // Операции сравнения
        bool test1 = a > b;
        bool test2 = s1 == s2;
        bool test3 = result1 != 0;
        
        // Комбинированные выражения
        int complex = (a + b) * (result1 - 3) / 2;
    }
    
    // Процедура без возвращаемого значения
    static void DisplayResults(int num, string text) {
        // Локальные переменные в процедуре
        int localNum = num * 2;
        string localText = text + "!";
        char separator = '-';
        
        // Использование переменных в выражениях
        bool shouldDisplay = localNum > 0 && localText != null;
    }
}