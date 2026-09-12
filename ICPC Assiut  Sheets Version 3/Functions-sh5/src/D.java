// Prime Function

import java.util.Scanner;

public class D {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            int n = in.nextInt();
            if(isPrime(n))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        in.close();

    }
    static boolean isPrime(int num) {
        if(num == 1) return false;
        else {
            for(int i = 2 ; i*i <= num ; i++) {
                if(num%i == 0)
                    return false;
            }
            return true;
        }
    }
}