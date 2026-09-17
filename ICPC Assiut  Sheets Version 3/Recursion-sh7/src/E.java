// Base Converssion

import java.util.Scanner;

public class E {
    public static void main(String [] argv) {
        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            int n = in.nextInt();
            convert(n);
            System.out.println();
        }
        in.close();
    }
    static void convert(int num) {
        if(num == 0)
            return;                        // base case

        convert(num/2);               // recursive case
        System.out.print(num%2);
    }
}