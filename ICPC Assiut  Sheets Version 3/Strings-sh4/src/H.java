// Good or Bad

import java.sql.SQLOutput;
import java.util.Scanner;

public class H {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            String s = in.next();
            boolean check = false;
            for(int i = 0 ; i < s.length()-2 ; i++) {
                if (s.charAt(i) == '1') {
                    if (s.charAt(i + 1) == '0') {
                        if (s.charAt(i + 2) == '1') {
                            check = true;
                            break;
                        }
                    }
                } else if (s.charAt(i) == '0') {
                    if (s.charAt(i + 1) == '1') {
                        if (s.charAt(i + 2) == '0') {
                            check = true;
                            break;
                        }
                    }
                }
            }
            if (check) {
                System.out.println("Good");
            } else {
                System.out.println("Bad");
            }
        }
        in.close();

    }
}