// Draw it.

import java.util.Scanner;

public class L2 {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        char s = in.next().charAt(0);
        int n = in.nextInt();
        int x;

        for(int i = 0 ; i < n ; i++) {
            x = in.nextInt();
            while(x-- > 0) {
                System.out.print(s);
            }
            System.out.println();
        }
        in.close();;
    }
}