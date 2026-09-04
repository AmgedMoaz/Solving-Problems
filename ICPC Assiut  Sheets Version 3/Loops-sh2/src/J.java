// Primes from 1 to n

import java.util.Scanner;

public class J {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        for(int i = 2 ; i <= n ; i++) {
            boolean prime = true;
            for(int j = 2 ; j < i ; j++) {
                if(i%j == 0) {
                    prime = false;
                    break;
                }
            }
            if(prime) {
                System.out.print(i + " ");
            }
        }
        in.close();

    }
}