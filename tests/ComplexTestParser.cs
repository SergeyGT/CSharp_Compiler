using System;

namespace TestNamespace {
    class BaseClass {
        public int publicField;
        private string privateField = "hello";
        protected double protectedField = 3.14;
        
        public BaseClass() {
            publicField = 100;
        }
        
        public virtual void VirtualMethod() {
            Console.WriteLine("Base virtual method");
        }
    }

    class DerivedClass : BaseClass {
        private bool derivedField = true;
        
        public DerivedClass() {
            protectedField = 2.71;
        }
        
        public override void VirtualMethod() {
            Console.WriteLine("Overridden method");
            base.VirtualMethod();
        }
        
        public static void StaticMethod(int parameter) {
            for (int i = 0; i < parameter; i++) {
                if (i % 2 == 0) {
                    Console.WriteLine(i);
                }
            }
        }
        
        public int Property { get; set; }
        
        public int ReadOnlyProperty {
            get { return publicField * 2; }
        }
    }

    struct Point {
        public int X;
        public int Y;
        
        public Point(int x, int y) {
            X = x;
            Y = y;
        }
    }

    interface IExample {
        void InterfaceMethod();
        int Calculate(int a, int b);
    }

    class Implementation : IExample {
        public void InterfaceMethod() {
            Console.WriteLine("Interface implementation");
        }
        
        public int Calculate(int a, int b) {
            return a + b;
        }
    }

    class Program {
        static void Main() {
            // Переменные и массивы
            int simpleVar = 42;
            string text = "Hello, World!";
            char symbol = 'A';
            bool flag = true;
            double[] array = new double[10];
            int[,] matrix = new int[3, 3];
            int[][] jagged = new int[2][];
            
            // Консольный ввод/вывод
            Console.WriteLine("Starting program...");
            Console.Write("Enter number: ");
            
            // Управляющие структуры
            if (simpleVar > 0) {
                for (int i = 0; i < 5; i++) {
                    while (simpleVar > i) {
                        Console.WriteLine(i);
                        simpleVar--;
                    }
                }
            }
            
            // Switch statement
            switch (symbol) {
                case 'A':
                    Console.WriteLine("Letter A");
                    break;
                case 'B':
                    Console.WriteLine("Letter B");
                    break;
                default:
                    Console.WriteLine("Other letter");
                    break;
            }
            
            // Циклы
            do {
                flag = !flag;
            } while (!flag);
            
            int[] numbers = {1, 2, 3, 4, 5};
            foreach (int num in numbers) {
                if (num == 3) continue;
                if (num == 5) break;
                Console.WriteLine(num);
            }
            
            // Работа с объектами
            DerivedClass obj = new DerivedClass();
            obj.VirtualMethod();
            DerivedClass.StaticMethod(5);
            
            // Вызов базового метода
            BaseClass baseObj = obj;
            baseObj.VirtualMethod();
            
            // Операторы
            int result = (simpleVar + 10) * 2 / 3;
            bool logical = (result > 0) && (simpleVar < 100) || flag;
            
            // Присваивания
            result += 10;
            result -= 5;
            result *= 2;
            simpleVar %= 7;
            
            // Массивы
            array[0] = 1.5;
            matrix[1, 1] = 42;
            jagged[0] = new int[3];
            jagged[0][1] = 99;
            
            // Возврат из метода
            return;
        }
        
        static int Factorial(int n) {
            if (n <= 1) return 1;
            return n * Factorial(n - 1);
        }
        
        static void MethodWithParams(int a, ref int b, out int c) {
            c = a + b;
            b = c * 2;
        }
    }
    
    enum Color {
        Red = 1,
        Green = 2,
        Blue = 3
    }
    
    abstract class AbstractClass {
        public abstract void AbstractMethod();
        public void ConcreteMethod() {
            Console.WriteLine("Concrete method");
        }
    }
    
    sealed class SealedClass : AbstractClass {
        public override void AbstractMethod() {
            Console.WriteLine("Sealed implementation");
        }
    }
}