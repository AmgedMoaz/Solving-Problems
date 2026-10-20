// Sum of Odd Integers

import java.util.Scanner;

public class V {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        while(t-- > 0) {
            long n = in.nextLong();
            long k = in.nextLong();

            if(n%2 == k%2 && n >= k*k) {
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }
        }
        in.close();
    }
}