import shape.*;
class Geometry
{
	public static void main(String[] args)
	{
		Rectangle r = new Rectangle(10,20);
		r.findArea();
		r.findPerimeter();

		Circle c = new Circle(20);
		c.findArea();
		c.findPerimeter();
	}
}
