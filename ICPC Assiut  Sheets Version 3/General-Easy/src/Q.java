// Night at the Museum

import java.util.Scanner;

public class Q {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();
        int diff = 0;
        char current = 'a';

        for (int i = 0; i < s.length(); i++) {
            int d = Math.abs(current - s.charAt(i));
            diff += Math.min(d, 26 - d);
            current = s.charAt(i);
        }

        System.out.println(diff);
        in.close();
    }
}