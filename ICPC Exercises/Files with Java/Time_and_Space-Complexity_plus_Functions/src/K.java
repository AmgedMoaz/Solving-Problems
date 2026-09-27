// Repetitions

import java.util.Scanner;

public class K {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();
        System.out.println(solve(s));
        in.close();
    }
    static int solve(String s) {
        int curr_len = 1;
        int max_len = 1;
        for(int i = 1 ; i < s.length() ; i++) {
            if(s.charAt(i) == s.charAt(i-1)) {
                curr_len++;
            }else {
                curr_len = 1;
            }
            max_len = Math.max(curr_len,max_len);
        }
        return max_len;
    }
}