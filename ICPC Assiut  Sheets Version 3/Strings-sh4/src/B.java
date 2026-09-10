// Let's use Getline

import java.util.Scanner;

public class B {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        String s = in.nextLine();
        for(int i = 0 ; i < s.length() ; i++) {
            if(s.charAt(i) == '\\') {
                break;
            }
            System.out.print(s.charAt(i));
        }
        in.close();

    }
}