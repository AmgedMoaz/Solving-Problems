// Following Directions

import java.util.Scanner;

public class R {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t > 0) {
            int n = in.nextInt();
            String s = in.next();
            boolean check = false;

            int x = 0 , y = 0;
            for(int i = 0 ; i < s.length() ; i++) {
                if(s.charAt(i) == 'L') {
                    x--;
                }else if(s.charAt(i) == 'R') {
                    x++;
                }else if(s.charAt(i) == 'U') {
                    y++;
                }else {
                    y--;
                }

                if(x == 1 && y == 1) {
                    check = true;
                }
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