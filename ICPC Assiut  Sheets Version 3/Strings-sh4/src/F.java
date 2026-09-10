// Way Too Long Words

import java.util.Scanner;

public class F {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            String s = in.next();
            int length = s.length();

            if(length <= 10) {
                System.out.println(s);
            }else {
                int counter = length-2;
                System.out.printf("%c%d%c%n",s.charAt(0) , counter , s.charAt(length-1));
            }
        }
        in.close();

    }
}