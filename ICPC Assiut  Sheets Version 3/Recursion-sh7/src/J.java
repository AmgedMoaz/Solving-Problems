// Factorial

import java.util.Scanner;

public class J {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        System.out.println(factorial(n));

        in.close();
    }
    static long factorial(int num) {
        if(num == 1)
            return 1;                      // base case

        return num*factorial(num-1);  // recursive case
    }
}