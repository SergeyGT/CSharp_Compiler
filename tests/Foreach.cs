class Program {
    public static void Main() {
        int[] numbers = new int[5];
        
        foreach (int number in numbers) {
            Console.WriteLine(number);
        }
        
        
        var names = new string[3];
        foreach (var name in names) {
            Console.WriteLine(name);
        }	
    }
}