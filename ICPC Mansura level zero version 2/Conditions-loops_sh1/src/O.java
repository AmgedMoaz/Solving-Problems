// Sum

import java.util.Scanner;

public class O {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        int a , b ,c;
        while(t-- > 0) {
            a = in.nextInt();
            b = in.nextInt();
            c = in.nextInt();

            if(a >= b && a >= c) {
                if(b+c == a) {
                    System.out.println("YES");
                }else {
                    System.out.println("NO");
                }
            }else if(b >= a && b >= c) {
                if(a+c == b) {
                    System.out.println("YES");
                }else {
                    System.out.println("NO");
                }
            }else {
                if(b+a == c) {
                    System.out.println("YES");
                }else {
                    System.out.println("NO");
                }
            }
        }

        in.close();;
    }
}