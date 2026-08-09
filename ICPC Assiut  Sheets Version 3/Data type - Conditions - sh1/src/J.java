 // Multiples

import java.util.Scanner;

public class J {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int a , b;
        a = input.nextInt();
        b = input.nextInt();

        if(a % b == 0 || b % a == 0) {
            System.out.println("Multiples");
        }else {
            System.out.println("No Multiples");
        }

    }
}