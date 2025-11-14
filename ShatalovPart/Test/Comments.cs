// Тест на различные виды комментариев
public class CommentsTest
{
    // Однострочный комментарий перед методом
    public void TestMethod()
    {
        int value = 10; // Однострочный комментарий в строке
        
        /* Многострочный комментарий
           который занимает несколько
           строк кода */
        string text = "Hello";
        
        /*
         * Еще один стиль многострочного
         * комментария с звездочками
         */
        bool flag = true;
    }
    
    /// <summary>
    /// XML комментарий для метода
    /// </summary>
    /// <param name="input">Входной параметр</param>
    /// <returns>Результат обработки</returns>
    public int ProcessData(int input)
    {
        return input * 2; // Вычисление результата
    }
}