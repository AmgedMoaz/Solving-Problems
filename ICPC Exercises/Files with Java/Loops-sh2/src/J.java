// Stones on the Table

import java.util.Scanner;

public class J {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String s = in.next();

        int removals = 0;
        for(int i = 1 ; i < n ; i++) {
            if( s.charAt(i) == s.charAt(i-1) ) {
                removals++;
            }
        }
        System.out.println(removals);
        in.close();

    }
}