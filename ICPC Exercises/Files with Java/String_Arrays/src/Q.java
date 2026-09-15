// Casimir's String Solitaire

import java.util.Scanner;

public class Q {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            int a = 0 , b = 0 , c = 0;
            String phrase = in.next();
            for(int i = 0 ; i < phrase.length() ; i++) {
                if(phrase.charAt(i) == 'A') {
                    a++;
                }else if(phrase.charAt(i) == 'B') {
                    b++;
                }else {
                    c++;
                }
            }
            System.out.println(b == a + c ? "YES" : "NO");
        }
        in.close();

    }
}