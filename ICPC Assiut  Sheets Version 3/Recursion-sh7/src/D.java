// Print Digits using Recursion

import java.util.Scanner;

public class D {
    public static void main(String [] argv) {
        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            int n = in.nextInt();
            printDigit(n);
            System.out.println();
        }
        in.close();
    }
    static void printDigit(int num) {
        if(num < 10){
            System.out.print(num + " ");
            return;                             // base case
        }

        printDigit(num/10);
        System.out.print(num%10 + " ");          // recursive case
    }
}