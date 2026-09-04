// Factorial

import java.util.Scanner;

public class G {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t > 0) {
            int n = in.nextInt();
            long fact = 1;
            for(int i = n ; i > 0 ; i--) {
                fact *= i;
            }
            System.out.println(fact);
            t--;
        }
        in.close();

    }
}