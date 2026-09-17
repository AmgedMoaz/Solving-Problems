// Print from N to 1

import java.util.Scanner;

public class C {
    public static void main(String [] argv) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        print(n);
        in.close();
    }
    static void print(int num) {
        if(num == 0)
            return;                                // base case

        System.out.print(num);
        if(num != 1)
            System.out.print(" ");
        print(num-1);                                // recursive case
    }
}