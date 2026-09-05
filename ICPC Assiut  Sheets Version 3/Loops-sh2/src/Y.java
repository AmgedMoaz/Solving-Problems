// Easy Fibonacci

import java.util.Scanner;

public class Y {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int a = 0 , b = 1 , c = 0;
        if(n == 1) {
            System.out.println(a);
        }else if(n == 2) {
            System.out.println(a + " " + b);
        }
        else {
            for(int i = 0 ; i < n ; i++) {
                if(i == 0) {
                    System.out.print(a + " ");
                }else if(i == 1) {
                    System.out.print(b + " ");
                }else {
                    c = a+b;
                    a = b;
                    b = c;
                    System.out.print(c + " ");
                }
            }
        }
        in.close();

    }
}