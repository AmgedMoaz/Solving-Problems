// Mirror

import java.util.Scanner;
import java.util.Arrays;

public class I {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++)    arr[i] = in.nextInt();

        Arrays.sort(arr);
        for(int i = 0 ; i < n/2 ; i++) {
            System.out.print(arr[i] + " ");
        }
        for(int i = (n/2)-1 ; i >= 0 ; i--) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();

        for(int i = n-1 ; i >= n/2 ; i--) {
            System.out.print(arr[i] + " ");
        }
        for(int i = n/2 ; i < n ; i++){
            System.out.print(arr[i] + " ");
        }
        in.close();
    }
}