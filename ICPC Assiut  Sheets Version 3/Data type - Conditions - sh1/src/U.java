// Float or int

import java.util.Scanner;

public class U {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        double n;
        n = input.nextDouble();

        if(n - (int)n == 0) {
            System.out.println("int " + (int)n);
        }else {
            System.out.println("float " + (int)n + " " + (n-(int)n));
        }

    }
}