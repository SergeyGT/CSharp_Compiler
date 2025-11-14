// Тест на null-условные операторы
public class NullConditionalTest
{
    public class Data
    {
        public string Name { get; set; }
        public int[] Numbers { get; set; }
    }
    
    public void TestNullConditional()
    {
        Data data = null;
        string name = data?.Name;
        int? firstNumber = data?.Numbers?[0];
        
        Data realData = new Data();
        string realName = realData?.Name;
    }
}