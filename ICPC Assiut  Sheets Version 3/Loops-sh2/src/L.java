// GCD

import java.util.Scanner;

public class L {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();
        int Min = Math.min(a,b);
        int GCD = 0;
        for(int i = 1 ; i <= Min ; i++) {
            if(a%i == 0&& b%i == 0) {
                GCD = i;
            }
        }
        System.out.println(GCD);
        in.close();

    }
}