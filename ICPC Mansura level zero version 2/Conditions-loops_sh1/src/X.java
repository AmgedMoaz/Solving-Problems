// Easy Problem

import java.util.Scanner;

public class X {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        long n = in.nextLong();

        if(n >= 13) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();
    }
}