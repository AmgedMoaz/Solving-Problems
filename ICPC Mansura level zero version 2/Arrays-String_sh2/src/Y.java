// Mike and palindrome

import java.util.Scanner;

public class Y {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();
        char[] arr = s.toCharArray();

        int diff = 0;
        for(int i = 0 ; i < s.length()/2 ; i++) {
            if(arr[i] != arr[s.length()-1-i]) {
                diff++;
            }
        }
        if(diff == 1) {
            System.out.println("YES");
        }else if(diff == 0) {
            if(s.length() % 2 == 0) {
                System.out.println("NO");
            }else {
                System.out.println("YES");
            }
        }else {
            System.out.println("NO");
        }
        in.close();
    }
}