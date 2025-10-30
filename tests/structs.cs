public struct Point {
    public float x;
    public float y;
}


public struct Vector3 {
    public float x;
    public float y;
    public float z;
    
    public float Length() {
        return x * x + y * y + z * z;
    }
}


public struct Rectangle {
    public float width;
    public float height;
    
    static Rectangle() {
        defaultSize = 1.0f;
    }
}