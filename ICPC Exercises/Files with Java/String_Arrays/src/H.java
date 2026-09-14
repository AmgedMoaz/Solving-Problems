// Flag

import java.util.Scanner;

public class H {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        short m = in.nextShort();

        char last = ' ';
        for(int i = 0 ; i < n ; i++) {
            String row = in.next();
            char c = row.charAt(0);

            if(i != 0 && c == last) {
                System.out.println("NO");
                return;
            }

            last = c;
            for(int j = 1 ; j < row.length() ; j++) {
                if(c != row.charAt(j)) {
                    System.out.println("NO");
                    return;
                }
            }
        }
        System.out.println("YES");
        in.close();

    }
}