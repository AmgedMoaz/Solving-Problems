// Mahmoud and Longest Uncommon Subsequence

import java.util.Scanner;

public class W {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String a = in.next();
        String b = in.next();

        if(a.equals(b)) {
            System.out.println( (-1) );
        }else {
            int maxSubSeq = Math.max(a.length(),b.length());
            System.out.println(maxSubSeq);
        }
        in.close();
    }
}