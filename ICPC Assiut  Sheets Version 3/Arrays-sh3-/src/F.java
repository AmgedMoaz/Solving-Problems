// Lowest Number

import java.util.Scanner;

public class F {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[] arr = new int[n];

        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }
        for(int i = n-1 ; i >= 0 ; i--) {
            System.out.print(arr[i] + " ");
        }
        in.close();

    }
}