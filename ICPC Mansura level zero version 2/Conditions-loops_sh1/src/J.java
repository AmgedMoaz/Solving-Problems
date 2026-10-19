// Make a triangle!

import java.util.Scanner;

public class J {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();

        int result = 0;
        if(a >= b && a >= c) {
            result = Math.max(0,a-(b+c)+1);
        }else if(b >= a && b >= c) {
            result = Math.max(0,b-(a+c)+1);
        }else {
            result = Math.max(0,c-(b+a)+1);
        }
        System.out.println(result);
        in.close();;
    }
}