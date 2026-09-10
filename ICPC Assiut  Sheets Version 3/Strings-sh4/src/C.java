// Compare

import java.util.Scanner;

public class C {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        String x = in.next();
        String y = in.next();

        int result = x.compareToIgnoreCase(y);
        if(result < 0) {
            System.out.println(x);
            return;
        }else if(result > 0) {
            System.out.println(y);
            return;
        }
        // x = y
        System.out.println(x);
        in.close();

    }
}