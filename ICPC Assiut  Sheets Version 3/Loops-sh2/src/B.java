// Even Numbers

import java.util.Scanner;

public class B {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();

        if(1 == n) {
            System.out.println(-1);
        }else {
            for(int i = 2 ; n >= i ; i += 2) {
                System.out.println(i);
            }
        }
        in.close();

    }
}