// Print from 1 to N

import java.util.Scanner;

public class B {
    public static void main(String [] argv) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        print(n);
        in.close();
    }
    static void print(int num) {
        if(num == 0)
             return;                     // base case

        print(num-1);
        System.out.println(num);         // recursive case
    }
}