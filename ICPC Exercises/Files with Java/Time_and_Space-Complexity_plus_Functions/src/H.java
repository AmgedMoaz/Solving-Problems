// Helpful Maths

import java.util.Arrays;
import java.util.Scanner;

public class H {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();
        int n = s.length();
        solve(s);
        in.close();
    }
    static void solve(String s) {
        int numCount = (s.length() + 1) / 2;
        char[] arr = new char[numCount];
        int index = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s.charAt(i) >= '0' && s.charAt(i) <= '9') {
                arr[index] = s.charAt(i);
                index++;
            }
        }
        Arrays.sort(arr);
        for(int i = 0; i < arr.length ; i++) {
            System.out.print(arr[i]);
            if(i != arr.length-1)
                System.out.print('+');
        }
    }
}