// ICPC Balloons

import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class N {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        int n;
        String s;

        Set<Character> arr = new HashSet<>();

        int totScore = 0;
        while(t-- > 0) {
            n = in.nextInt();
            s = in.next();

            for(int i = 0 ; i < n ; i++) {
                arr.add(s.charAt(i));
            }
            totScore = (2*arr.size()) + (s.length()-arr.size());
            System.out.println(totScore);
            arr.clear();
        }

        in.close();
    }
}