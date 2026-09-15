// Short Substrings

import java.util.Scanner;

public class R {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            String b = in.next();

            StringBuilder a = new StringBuilder();
            for(int i = 0 ; i < b.length() ; i += 2) {
                a.append(b.charAt(i));
            }
            a.append(b.charAt(b.length()-1));
            System.out.println(a);
        }
        in.close();

    }
}