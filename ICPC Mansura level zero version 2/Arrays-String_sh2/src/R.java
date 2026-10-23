// Way Too Long Words

import java.util.Scanner;

public class R {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        String s;
        while(t-- > 0) {
            s = in.next();

            if(s.length() <= 10) {
                System.out.println(s);
            }else {
                char ch1 = s.charAt(0);
                char ch2 = s.charAt(s.length()-1);
                System.out.printf("%c%d%c%n",ch1,s.length()-2,ch2);
            }
        }
        in.close();
    }
}