public class FunctionsTest
{
    public void SimpleMethod()
    {
        int x = 5;
    }
    
    public int MethodWithReturn(int a, int b)
    {
        return a + b;
    }
    
    public void TestMethodCalls()
    {
        SimpleMethod();
        int result = MethodWithReturn(10, 20);
    }
}