// String Functions

import java.util.Arrays;
import java.util.Scanner;

public class M {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.next();
        int current = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s.charAt(i) == 'h') {
                if(current == 0)
                    current++;
            }else if(s.charAt(i) == 'e') {
                if(current == 1) {
                    current++;
                }
            }else if(s.charAt(i) == 'l') {
                if(current == 2 || current == 3) {
                    current++;
                }
            }else if(s.charAt(i) == 'o') {
                if(current == 4) {
                    current++;
                }
            }
        }
        if(current == 5) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();

    }
}