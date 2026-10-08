// Primes

import java.util.Scanner;

public class C {
    public static void main(String []argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        if(n == 2) {
            System.out.println(-1);
        }else {
            if(isPrime(n-2)) {
                System.out.println(2 + " " + (n-2));
            }else {
                System.out.println(-1);
            }
        }
        in.close();
    }
    static boolean isPrime(int n) {
        if(n <= 1) {
            return false;
        }else {
            for(int i = 2 ; i*i <= n ; i++) {
                if(n%i == 0) {
                    return false;
                }
            }
            return true;
        }
    }
}