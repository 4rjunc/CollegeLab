interface Polygon{
    void getArea(int length,int breadth);
}

class Rectangle implements Polygon
{
    public void getArea(int length,int breadth)
    {
        System.out.println("This area of the rectangle is " + (length * breadth));
    }
}

class Interface
{
    public static void main(String[] args)
    {
        Rectangle r1 = new Rectangle();
        r1.getArea(10,15);
    }
}