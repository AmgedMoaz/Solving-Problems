// Petya and Strings

import java.util.Scanner;

public class E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String a = in.next();
        String b = in.next();
        System.out.println(solve(a,b));
        in.close();
    }
    static int solve(String c , String s) {
        char x , y;
        for(int i = 0 ; i < c.length() ; i++) {
            x = Character.toLowerCase(c.charAt(i));
            y = Character.toLowerCase(s.charAt(i));
            if(x > y)       return 1;
            else if(x < y)  return -1;
        }
        return 0;
    }
}