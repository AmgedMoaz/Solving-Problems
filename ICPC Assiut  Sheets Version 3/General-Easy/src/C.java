// Koko And The Transformation

import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        int num , sum1 = 0  , sum2 = 0;
        for(int i = 0 ; i < n ; i++) {
            num = in.nextInt();
            sum1 += num;
        }
        for(int j = 0 ; j < m ; j++) {
            num = in.nextInt();
            sum2 += num;
        }

        if(sum1 == sum2) System.out.println("Yes");
        else System.out.println("No");
        in.close();
    }
}