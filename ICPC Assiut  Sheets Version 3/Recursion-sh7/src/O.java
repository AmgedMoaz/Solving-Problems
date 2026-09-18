// Fibonacci

import java.util.Scanner;

public class O {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int result = fibonacci(n);
        System.out.println(result);
        in.close();
    }
    static int fibonacci(int num) {
        if(num == 2 || num == 0)
            return 1;                                           // base case
        if(num == 1)
            return 0;                                           // base case

        return fibonacci(num-1) + fibonacci(num-2);   // recursive case
    }
}