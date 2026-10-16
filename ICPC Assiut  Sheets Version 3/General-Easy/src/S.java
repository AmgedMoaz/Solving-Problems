// Good Number

import java.util.Scanner;

public class S {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int k = in.nextInt();

        int isGood = 0;
        while(n-- > 0) {
            String s = in.next();
            char[] arr = s.toCharArray();

            boolean[] found = new boolean[10];
            for(char c : arr) {
                int digit = c - '0';
                if(digit <= k) {
                    found[digit] = true;
                }
            }
            boolean allFound = true;
            for (int d = 0; d <= k; d++) {
                if (!found[d]) {
                    allFound = false;
                    break;
                }
            }

            if(allFound) {
                isGood++;
            }
        }
        System.out.println(isGood);
        in.close();
    }
}