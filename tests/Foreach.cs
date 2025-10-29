class ForEachTest {
    void TestForEach() {
        int[] numbers = new int[] {1, 2, 3};
        string[] names = new string[] {"Alice", "Bob"};
        
        foreach (int number in numbers) {
            int squared = number * number;
        }
        
        foreach (string name in names) {
            string greeting = "Hello";
        }
    }
}