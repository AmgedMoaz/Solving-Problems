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
        // Insertion sort
        for(int i = 1 ; i < n ; i++) {
            int j = i-1;
            int key = arr[i];
            while(j >= 0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        for(int i = 0 ; i < n ; i++) {
            System.out.print(arr[i] + " ");
        }
        in.close();

    }
}