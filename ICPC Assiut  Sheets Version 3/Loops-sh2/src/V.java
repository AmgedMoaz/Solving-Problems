// PUM

import java.util.Scanner;

public class V {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int counter = 1;
        for(int i = 1 ; i <= n ; i++) {
            int x = 3;
            while(x > 0) {
                System.out.print((counter++) + " ");
                x--;
            }
            counter++;
            System.out.println("PUM");
        }
        in.close();

    }
}