// Arithmetic Array

import java.util.Scanner;

public class F {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            short n = in.nextShort();
            int[] arr = new int[n];
            long sum = 0;
            for(int i = 0 ; i < n ; i++) {
                arr[i] = in.nextInt();
                sum += arr[i];
            }
            if(sum < n)
                System.out.println(1);
            else
                System.out.println(sum - n);
        }
        in.close();

    }
}