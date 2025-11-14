// Тест на перегрузку методов
public class OverloadingTest
{
    public void Process(int number)
    {
        // Обработка целого числа
    }
    
    public void Process(string text)
    {
        // Обработка строки
    }
    
    public void Process(int number, string text)
    {
        // Обработка двух параметров
    }
    
    public void TestOverloading()
    {
        Process(10);
        Process("text");
        Process(10, "text");
    }
}