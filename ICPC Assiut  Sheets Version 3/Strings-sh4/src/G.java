// Conversion

import java.sql.SQLOutput;
import java.util.Scanner;

public class G {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        String s= in.next();
        for(int i = 0 ; i < s.length() ; i++) {
            if(s.charAt(i) == ',') {
                System.out.print(' ');
            }else if(s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
                System.out.printf("%C",s.charAt(i));
            }else if(Character.isUpperCase(s.charAt(i))) {
                System.out.print(Character.toLowerCase(s.charAt(i)));
            }
        }
        System.out.println();
        in.close();

    }
}