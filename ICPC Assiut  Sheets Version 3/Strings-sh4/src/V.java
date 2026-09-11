// Replace Word

import java.util.Scanner;

public class V {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.next();
        int n = s.length();
        for(int i = 0 ; i < n ; i++) {
            if(i+4 < n && s.charAt(i) == 'E' && s.charAt(i+1) == 'G' && s.charAt(i+2) == 'Y' &&
               s.charAt(i+3) == 'P' && s.charAt(i+4) == 'T') {
                System.out.print(" ");
                i += 4;
            }else {
                System.out.print(s.charAt(i));
            }
        }
        in.close();

    }
}