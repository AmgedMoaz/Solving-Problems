// Spy Detected!

import java.util.Arrays;
import java.util.Scanner;

public class S {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        int n;
        int[] arr;
        while(t-- > 0) {
            n = in.nextInt();

            arr = new int[n];
            for(int i = 0 ; i < n ; i++) {
                arr[i] = in.nextInt();
            }

            int[] arr2 = arr.clone();
            Arrays.sort(arr);


            int target;
            if(arr[0] != arr[1]) {
                target = arr[0];
            }else {
                target = arr[n-1];
            }

            for(int i = 0 ; i < n ; i++) {
                if(target == arr2[i]) {
                    System.out.println(++i);
                }
            }

        }
        in.close();
    }
}