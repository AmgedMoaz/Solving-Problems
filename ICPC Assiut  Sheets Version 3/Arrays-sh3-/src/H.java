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
        // Selection sort
        for(int i = 0 ; i < n ; i++) {
            int minIndex = i;
            for(int j = i+1 ; j < n ; j++) {
                if(arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            if(minIndex != i) {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            System.out.print(arr[i] + " ");
        }
        in.close();

    }
}