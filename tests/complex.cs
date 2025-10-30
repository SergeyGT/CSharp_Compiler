public struct ComplexNumber {
    public double real;
    public double imaginary;
    
    public ComplexNumber(double r, double i) {
        real = r;
        imaginary = i;
    }
    
    public static ComplexNumber Add(ComplexNumber a, ComplexNumber b) {
        return new ComplexNumber(a.real + b.real, a.imaginary + b.imaginary);
    }
}

result = ComplexNumber.Add(num1, num2);