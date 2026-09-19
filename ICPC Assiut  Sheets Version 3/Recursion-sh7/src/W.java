// Reach Value

import java.util.Scanner;

public class W {
    static long number;
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            number = in.nextLong();
            if(reachValue(1))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        in.close();
    }
    static boolean reachValue(long num) {
        if(num > number)
            return false;                                                  // base case
        else if(num == number)
            return true;                                                   // base case
        else {
            return reachValue(num * 10) || reachValue(num * 20);  // recursive case
        }
    }
}