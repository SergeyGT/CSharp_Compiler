class StringCharTests {
    void TestLiterals() {
        // Символьные литералы
        char a = 'a';
        char newline = '\n';
        char tab = '\t';
        char backslash = '\\';
        char singleQuote = '\'';
        
        // Строковые литералы
        string simple = "Hello";
        string withEscapes = "Line1\nLine2\tTabbed";
        string withQuotes = "He said \"Hello\"";

        
        // Строковые операции
        string combined = simple + " World";
        int length = combined.Length;
    }
}
