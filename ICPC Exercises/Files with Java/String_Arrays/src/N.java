// Sale

import java.util.Arrays;
import java.util.Scanner;

public class N {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        short m = in.nextShort();

        int [] arr = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        int profit = 0;
        Arrays.sort(arr);
        for(int j = 0 ; j < m && j < n ; j++) {
            if(arr[j] <= 0) {
                profit += (0-arr[j]);
            }else {
                break;
            }
        }
        System.out.println(profit);
        in.close();

    }
}