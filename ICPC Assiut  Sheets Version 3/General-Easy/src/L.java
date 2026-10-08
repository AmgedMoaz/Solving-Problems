// Sereja and Dima

import java.util.Scanner;

public class L {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }

        int left = 0 , right = n-1;
        int sum1 = 0 , sum2 = 0;
        boolean Urturn = true;
        for(;left <= right;) {
            if(Urturn) {
                if(arr[left] > arr[right]) {
                    sum1 += arr[left];
                    left++;
                }else {
                    sum1 += arr[right];
                    right--;
                }
                Urturn = false;
            }else {
                if(arr[left] > arr[right]) {
                    sum2 += arr[left];
                    left++;
                }else {
                    sum2 += arr[right];
                    right--;
                }
                Urturn = true;
            }
        }
        System.out.println(sum1 + " " + sum2);
        in.close();
    }
}