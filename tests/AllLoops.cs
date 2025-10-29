class AllLoopsTest {
    void TestAllControlStructures() {
        // Mixed control structures
        int[] data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        
        foreach (int num in data) {
            switch (num % 3) {
                case 0:
                    Console.WriteLine(num + " divisible by 3");
                    break;
                case 1:
                    Console.WriteLine(num + " mod 3 = 1");
                    break;
                case 2:
                    Console.WriteLine(num + " mod 3 = 2");
                    break;
            }
        }
        
        // Complex nested example
        for (int i = 0; i < 5; i++) {
            int j = 0;
            while (j < 3) {
                if (i == j) {
                    do {
                        Console.WriteLine("i = j = " + i);
                        j++;
                    } while (j < 2 && i < 4);
                }
                j++;
            }
        }
    }
}