abstract class shape
{
	String name;

	shape(String name)
	{
		this.name = name;
	}
	void show()
	{
		System.out.println(this.name);
	}
	abstract int getArea();
}

class Rectangle extends shape
{
	int length,breadth;
	Rectangle(int l,int b,String name)
	{
		super(name);
		this.breadth = b;
		this.length = l;
	}
	int getArea()
	{
		return this.length*this.breadth;
	}
}

class AbstractDemo
{
	public static void main(String[] args)
	{
		Rectangle r = new Rectangle(5,10,"R1");
		System.out.print("Rectangle: ");
		r.show();
		System.out.print("Area = " + r.getArea());
	}
}
