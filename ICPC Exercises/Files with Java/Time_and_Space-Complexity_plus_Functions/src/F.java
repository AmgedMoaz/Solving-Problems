// Gravity Flip

import java.util.Arrays;
import java.util.Scanner;

public class F {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int []arr = new int[n];
        for(int i = 0 ; i < arr.length ; i++)
            arr[i] = in.nextInt();
        solve(arr);
        in.close();
    }
    static void solve(int[] arr) {
        Arrays.sort(arr);
        for(int i = 0 ; i < arr.length ; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}