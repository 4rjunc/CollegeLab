package shape;
public class Circle
{
	private double radius;
	public Circle(double r)
	{
		this.radius = r;
	}

	public void findArea()
	{
		System.out.println(3.14*this.radius*this.radius);
	}

	public void findPerimeter()
	{
		System.out.println(2*3.14*this.radius);
	}
}

