// Twins

import java.util.Arrays;
import java.util.Scanner;

public class C {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int [] arr = new int[n];

        int totSum = 0;
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
            totSum += arr[i];
        }
        Arrays.sort(arr);
        int mySum = 0 , counter = 0;
        for(int i = n-1 ; i >= 0 ; i--) {
            mySum += arr[i];
            counter++;
            if( mySum > (totSum-mySum) ) {
                break;
            }
        }
        System.out.println(counter);

        in.close();

    }
}