class MultiThread extends Thread
{
	String message;
	int timer;
	String name;
	MultiThread(int timer,String name,String message)
	{
		this.timer = timer;
		this.name = name;
		this.message = message;
	}

	public void run()
	{
		try
		{
			for(int i=0;i<5;i++)
			{
				System.out.println(this.message);
				Thread.sleep(this.timer);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("Child Interrupted....");
		}
		System.out.println("Exiting.." + this.name);
	}
}

class ThreadDemo
{
public static void main(String args[])
{
	MultiThread mt1 = new MultiThread(1000,"First Thread","Good Morning");
	MultiThread mt2 = new MultiThread(2000,"Second Thread","Hello");
	MultiThread mt3 = new MultiThread(3000,"Third Thread","Welcome");

	//Stating Threads
	mt1.start();
	mt2.start();
	mt3.start();

	try
	{
		mt1.join();
		mt2.join();
		mt3.join();
	}
	catch(InterruptedException e)
	{
		System.out.println("Main thread interrupted..");
	}
	System.out.println("Exiting main thread");
}	
}
