class Shape
{
    String name;
    
    Shape(String name)
    {
        this.name = name;
    }

    void show()
    {
        System.out.println(this.name);
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

    int getArea()
    {
        return lenght*breadth;
    }

    int getPerimeter()
    {
        return 2*(this.lenght*this.breadth);
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

    double getArea()
    {
        return 3.14*radius*radius;
    }

    double getPerimeter()
    {
        return 2*3.14*this.radius;
    }
    
}

class Cylinder extends Circle
{
    double height;
    Cylinder(double r,double h,String name)
    {
        super(r,name);
        this.height = h;
    }

    double getVolume()
    {
        double volume;
        volume = getArea()*height;
        return volume;
    }
}

class Inheritance
{
    public static void main(String[] args)
    {
        Rectangle r = new Rectangle(5,10,"R1");
        Circle c = new Circle(10,"C!!");
        Cylinder cyl = new Cylinder(10,20,"CYL@)");

        System.out.println("Rectangle");
        r.show();
        System.out.println("Area of reactangle"+ r.getArea());

        System.out.println("Cricle");
        c.show();
        System.out.println("Area of Circle"+ c.getArea());
        
        System.out.println("Cylinder");
        cyl.show();
        System.out.println("Area of cylinder "+ cyl.getVolume());
        
    }
}