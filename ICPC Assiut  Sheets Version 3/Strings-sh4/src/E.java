// Count

import java.util.Scanner;

public class E {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        String s = in.next();

        int sum = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            sum += (s.charAt(i) - '0');
        }
        System.out.println(sum);
        in.close();

    }
}