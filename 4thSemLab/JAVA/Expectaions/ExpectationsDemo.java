import java.util.Scanner;

class UnderAgeExeption extends Exception
{
    int age;
    UnderAgeExeption(int age)
    {
        this.age = age;
    }

    public String toString()
    {
        return "Your age is " + age + "years";
    }
}

class ExceptionsDemo
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = sc.nextInt();
        try
        {
            vote(age);
            System.out.println("Enter two numbers: ");
            int a = sc.nextInt();
            int b = sc.nextInt();
            double ans = a/b;
            System.out.println(a + "/" + b + " = " + ans);
            
        }

        catch(UnderAgeExeption e)
        {
            System.out.println("Error: " + e);           
        }
        catch(ArithmeticException e)
        {
            System.out.println("Error: "+ e);
        }
        finally
        {
            System.out.println("Exiting...\nThank you");
        }
    }



    static void vote(int age) throws UnderAgeExeption
    {
        if(age >= 18)
        {
            System.out.println("Welcome..");
        }

        else
        {
            throw new UnderAgeExeption(age);
        }
    }
}