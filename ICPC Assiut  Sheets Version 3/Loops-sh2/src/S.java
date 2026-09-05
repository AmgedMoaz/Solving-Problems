// Sum of Consecutive Odd Numbers

import java.util.Scanner;

public class S {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t > 0) {
            int n = in.nextInt();
            int m = in.nextInt();
            int Min = Math.min(n,m);
            int Max = Math.max(n,m);

            int sum = 0;
            for(int i = Min+1 ; i < Max ; i++) {
                if(i%2 != 0) {
                    sum += i;
                }
            }
            System.out.println(sum);
            t--;
        }
        in.close();

    }
}