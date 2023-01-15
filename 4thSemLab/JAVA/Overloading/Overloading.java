import java.util.Scanner;

class Triangle{
    float a,b,c;

    Triangle(int a,int b,int c)
    {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    Triangle(int b)
    {
        this.b = b;
    }

    double getArea()
    {
        double s = (a+b+c)/2;
        System.out.println(s);
        return Math.sqrt(s*(s-a)*(s-b)*(s-c));
    }

    double getArea(double h)
    {
        return (0.5*b*h);
    }
}

class Overloading
{
    public static void main(String[] args)
    {
        int choice;
        double a,b,c,h;
        Triangle t;
        System.out.println("1. Triangle with 3 sides known");
        System.out.println("2. Triangle with 2 sides known");

        System.out.println("Enter your choice:");
        Scanner sc = new Scanner(System.in);
        choice = sc.nextInt();
        switch(choice)
        {
            case 1:
                System.out.println("Enter the three sides: ");
                a = sc.nextDouble();
                b = sc.nextDouble();
                c = sc.nextDouble();
                t = new Triangle(a,b,c);
                System.out.println("Area of triangle = " + t.getArea());
                break;
            
            case 2 :
                System.out.println("Enter the base side: ");
                b = sc.nextDouble();
                t = new Triangle(b);
                System.out.println("Enter the height: ");
                h = sc.nextDouble();
                System.out.println("Area of Triangel "+t.getArea(h));
                break;

            default:
                System.out.println("Invalid Choice..");

        }
        
    }
}
