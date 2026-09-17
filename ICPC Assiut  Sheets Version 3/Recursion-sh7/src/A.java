// Print Recursion

import java.util.Scanner;

public class A {
    public static void main(String [] argv) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        print(n);
        in.close();
    }
    static void print(int num) {
        if(num == 0)
            return;                                // base case

        System.out.println("I love Recursion");
        print(num - 1);                            // recursive case
    }
}