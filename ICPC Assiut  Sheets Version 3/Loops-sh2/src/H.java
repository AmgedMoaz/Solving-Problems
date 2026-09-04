// One Prime

import java.util.Scanner;

public class H {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        if(n == 2) System.out.println("YES");

        else if(n > 2) {
            boolean isPrime = true;
            for(int i = 3 ; i < n ; i++) {
                if(n%i == 0) {
                    isPrime = false;
                }
            }
            if(isPrime) {
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }
        }
            in.close();

    }
}