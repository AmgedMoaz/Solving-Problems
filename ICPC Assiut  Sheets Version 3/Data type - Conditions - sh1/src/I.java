 // Welcome for you with Conditions

import java.util.Scanner;

public class I {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int a , b;
        a = input.nextInt();
        b = input.nextInt();

        // condition
        if(a >= b) {
            System.out.println("Yes");
        }else {
            System.out.println("No");
        }

    }
}