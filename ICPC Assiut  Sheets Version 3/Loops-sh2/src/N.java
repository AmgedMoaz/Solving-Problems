// Numbers Histogram

import java.util.Scanner;

public class N {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        char s = in.next().charAt(0);
        short n = in.nextShort();
        for(int i = 0 ; i < n ; i++) {
            int x = in.nextInt();
            while(x > 0) {
                System.out.print(s);
                x--;
            }
            System.out.println();
        }
        in.close();

    }
}