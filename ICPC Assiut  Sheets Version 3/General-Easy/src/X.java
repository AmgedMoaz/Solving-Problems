// Panoramix's Prediction

import java.util.Scanner;

public class X {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        int nextPrime = -1;
        for(int i = n+1 ; ; i++) {
            if(isPrime(i)) {
                nextPrime = i;
                break;
            }
        }

        if(nextPrime == m) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();
    }

    static boolean isPrime(int num) {
        for(int i = 2 ; i*i <= num ; i++) {
            if(num%i == 0) {
                return false;
            }
        }
        return true;
    }
}