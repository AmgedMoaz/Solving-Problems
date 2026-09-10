// Binary Search

import java.util.Arrays;
import java.util.Scanner;

public class Z {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int q = in.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        Arrays.sort(arr);
        while(q-- > 0) {
            boolean check = false;
            int x = in.nextInt();
            int left = 0 , right = n-1;
            while(left <= right) {
                int mid = (left+right) / 2;
                if(arr[mid] == x) {
                    check = true;
                    break;
                }else if(arr[mid] > x) {
                    right = mid-1;
                }else {
                    left = mid+1;
                }
            }
            if(check) {
                System.out.println("found");
            }else {
                System.out.println("not found");
            }
        }
        in.close();

    }
}