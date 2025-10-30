class NullConditionalTests {
    void TestNullOperators() {
        string text = "Hello";
        string nullText = null;
        
        // null-условный доступ к свойствам
        int? length1 = text?.Length;
        int? length2 = nullText?.Length;
        
        // null-условный вызов методов
        text?.ToString();
        nullText?.ToString();
        
        // Комбинирование с другими операциями
        bool hasValue = text?.Length > 0;
    }
}