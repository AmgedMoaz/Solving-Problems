// Math challenge2

import java.util.Scanner;

public class V {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();

        int num = 0 , sumDigit = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            num = s.charAt(i) - '0';
            sumDigit += num;
        }
        if(sumDigit % 3 == 0) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();
    }
}