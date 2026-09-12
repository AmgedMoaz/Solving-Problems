// Equation

import java.util.Scanner;

public class F {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        short x = in.nextShort();
        short n = in.nextShort();
        System.out.println(equation(x,n));
        in.close();

    }
    static long equation(int x , int n) {
        long sum = 0;
        for(int i = 2 ; i <= n ; i += 2) {
            int index = i;
            long time = 1;
            while(index-- > 0) {
                time *= x;
            }
            sum += time;
        }
        return sum;
    }
}