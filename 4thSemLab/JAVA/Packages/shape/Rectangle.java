package shape;
public class Rectangle
{
	private int length,breadth;

	public Rectangle(int l,int b)
	{
		this.length = l;
		this.breadth = b;
	}
	public void findArea()
	{
		System.out.println(this.length*this.breadth);
	}
	public void findPerimeter()
	{
		System.out.println(2*(this.length+this.breadth));
	}
}


