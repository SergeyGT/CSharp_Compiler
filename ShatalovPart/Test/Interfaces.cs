// Тест на интерфейсы и их реализацию
public interface IDrawable
{
    void Draw();
    string GetName();
}

public interface IResizable
{
    void Resize(int percent);
}

public class Circle : IDrawable, IResizable
{
    public void Draw()
    {
        // Реализация рисования
    }
    
    public string GetName()
    {
        return "Circle";
    }
    
    public void Resize(int percent)
    {
        // Изменение размера
    }
}

public class InterfaceTest
{
    public void TestInterfaces()
    {
        IDrawable drawable = new Circle();
        drawable.Draw();
        string name = drawable.GetName();
    }
}