class Shape
{
    String name;

    Shape(String name)
    {
        this.name=name;
    }

    void show()
    {
        System.out.println("Shape"+ this.name);
    }

    void findArea()
    {
        System.out.println("No Area");
    }
}

class Rectangle extends Shape
{
    private int lenght,breadth;

    Rectangle(int l,int b,String name)
    {
        super(name);
        this.lenght = l;
        this.breadth = b;
    }

    void findArea()
    {
        System.out.println(this.lenght*this.breadth);
    }

    void show()
    {
        System.out.println("Rectangle" + this.name);
    }
}

class Circle extends Shape
{
    private double radius;

    Circle(double r,String name)
    {
        super(name);
        this.radius = r;
    }

    void findArea()
    {
        System.out.println(3.14*radius*radius*2);
    }

    void show()
    {
        System.out.println("Circle"+ this.name);
    }
}

class Triangle extends Shape
{
    private int height,base;

    Triangle(int h,int b,String name)
    {
        super(name);
        this.height = h;
        this.base = b;
    }

    void findArea()
    {
        System.out.println(0.5*base*height);
    }

    void show()
    {
        System.out.println("Triangle"+ this.name);
    }
}

class Overriding
{
    public static void main(String[] args)
    {
        Shape[] shapes = new Shape[4];

        shapes[0] = new Shape("Shape 1");
        shapes[1] = new Rectangle(10,10,"Rectangle 1");
        shapes[2] = new Circle(8.7,"Circle 2");
        shapes[3] = new Triangle(3,2,"Triangle 3");

        for(Shape s: shapes)
        {
            s.show();
            s.findArea();
        }
    }
}
