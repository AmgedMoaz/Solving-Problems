// Palindrome

import java.util.Scanner;

public class I {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        String s = in.next();
        for(int i = 0 ; i < s.length()/2 ; i++) {
            if(s.charAt(i) != s.charAt(s.length()-1-i)) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
        in.close();

    }
}