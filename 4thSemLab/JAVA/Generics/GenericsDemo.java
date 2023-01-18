import java.util.*;

class Stack<T>
{
	private ArrayList<T> s;
	private int top;

	Stack()
	{
		s = new ArrayList<T>();
		top = -1;
	}

	public void push(T item)
	{
		s.add(item);
		top++;
	}

	public T pop()
	{
		if(top == -1)
		{
			System.out.println("Stack Empty..");
			return null;
		}
		top--;
		return s.get(top);
	}

	public void display()
	{
		if(top == -1) 
		{
                    System.out.println("Stack is empty");
                }
                else
                {
			System.out.println("Current Stack");
			for(int i = top;i>=0;i--)
			{
				System.out.println(s.get(i));
			}
		}
	}
}

class GenericsDemo
{
	public static void main(String[] args)
	{

		Stack<Integer> s1 = new Stack<Integer>();
		s1.push(11);
		s1.push(22);
		s1.push(33);
		s1.display();
		s1.pop();
		s1.display();

		Stack<Double> s2 = new Stack<Double>();
		s2.push(11.5);
		s2.push(22.5);
		s2.push(33.3);
		s2.display();
		s2.pop();
		s2.display();
	}
}
