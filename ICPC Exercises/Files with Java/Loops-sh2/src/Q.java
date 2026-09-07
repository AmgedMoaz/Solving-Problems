// Sum

import java.util.Scanner;

public class Q {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while(t > 0) {
            short a = in.nextShort();
            short b = in.nextShort();
            short c = in.nextShort();
            boolean check = false;

            if(a == (b+c)) {
                check = true;
            }else if(b == (a+c)) {
                check = true;
            }else if(c == (a+b)) {
                check = true;
            }

            if(check) {
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }

            t--;
        }
        in.close();

    }
}