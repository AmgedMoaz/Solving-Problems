// Codeforces Checking

import java.util.Scanner;

public class O {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t;
        t = in.nextShort();

        while(t > 0) {
            char c = in.next().charAt(0);

            if(c == 'c' || c == 'o' || c == 'd' || c == 'e' ||
               c == 'f' || c == 'r' || c == 's') {
                System.out.println("yes");
            }else {
                System.out.println("NO");
            }
            t--;
        }
        in.close();

    }
}