// Positions in array

import java.util.Scanner;

public class D {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[] arr = new int[n];

        for(int i = 0 ; i < n ;i++) {
            arr[i] = in.nextInt();
        }
        for(int i = 0 ; i < n ;i++) {
            if(arr[i] <= 10) {
                System.out.println("A[" + i + "] = " + arr[i]);
            }
        }
        in.close();

    }
}