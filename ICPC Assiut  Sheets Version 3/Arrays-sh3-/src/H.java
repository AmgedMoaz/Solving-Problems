// Sorting

import java.util.Scanner;

public class H {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int [] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }
        // Bubble sort
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n-i-1 ; j++) {
                if(arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        for(int i = 0 ; i < n ; i++) {
            System.out.print(arr[i] + " ");
        }
        in.close();

    }
}