import java.util.Scanner;

public class solveQuadratic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of coefficient of x2 :");
        double a = sc.nextDouble();
        System.out.print("Enter the value of coefficient of x :");
        double b = sc.nextDouble();
        System.out.print("Enter the value of constant :");
        double c = sc.nextDouble();
        double d = (b*b) - (4.0*a*c);
        if (d == 0.0){
            System.out.println("roots are real and equal");
            double root = -b / (2.0 * a);
            System.out.println("Root = "+root);
        }
        else if(d > 0.0){
            System.out.println("roots are real and different");
            double root1 = ((-b) + Math.pow(d,0.5))/(2.0*a);
            double root2 = ((-b) - Math.pow(d,0.5))/(2.0*a);
            System.out.println("The roots are "+root1+" "+root2);
        }
        else {
            System.out.println("roots are imaginary");
        }

    }

}
