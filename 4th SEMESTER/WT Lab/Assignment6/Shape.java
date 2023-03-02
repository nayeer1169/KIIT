//ques 5
public abstract class Shape {
    public abstract double area();
}

 class Triangle extends Shape {
//    @Override
    private final double length;
    private final double height;

    public Triangle(double length, double height) {
        this.length = length;
        this.height = height;
    }


    public double area() {
        return 0.5 * length * height;
    }
}

 class Rectangle extends Shape {
    private final double length;
    private final double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }


    public double area() {
        return length * width;
    }
}