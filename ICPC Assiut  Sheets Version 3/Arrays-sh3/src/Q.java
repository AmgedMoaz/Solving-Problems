// Count Subarrays

import java.util.Scanner;

public class Q {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            short n = in.nextShort();
            int[] arr = new int[n];
            for(int i = 0 ; i < n ; i++) {
                arr[i] = in.nextInt();
            }

            int counter = 0 , length = 0;
            for(int i = 0 ; i < n ; i++) {
                if(i == 0 || arr[i] >= arr[i-1]) {
                    length++;
                }else {
                    length = 1;
                }
                counter += length;
            }
            System.out.println(counter);
        }
        in.close();

    }
}