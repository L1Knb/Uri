import java.util.Scanner;
 

public class Main {

    public static void main(String[] args) {
     Scanner scan = new Scanner(System.in);
     double a = scan.nextDouble();
     double r = 3.14159 * Math.pow(a, 2);

        System.out.printf("A=%.4f%n",r);
        scan.close();
    }

}