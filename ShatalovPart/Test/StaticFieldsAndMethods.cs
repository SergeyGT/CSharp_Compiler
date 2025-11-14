// Тест на статические члены класса
public class StaticTest
{
    public static int StaticValue = 100;
    private static string staticText = "Hello";
    
    public static void StaticMethod()
    {
        int local = StaticValue + 50;
    }
    
    public static int GetDoubleValue()
    {
        return StaticValue * 2;
    }
    
    public void TestStaticMembers()
    {
        StaticMethod();
        int value = StaticTest.StaticValue;
        int doubled = GetDoubleValue();
    }
}