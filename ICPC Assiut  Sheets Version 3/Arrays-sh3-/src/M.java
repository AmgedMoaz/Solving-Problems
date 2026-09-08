// Replace MinMax

import java.util.Scanner;

public class M {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }
        int minIndex = 0 , minItem = arr[0];
        int maxIndex = 0 , maxItem = arr[0];
        for(int i = 1 ; i < n ; i++) {
            if(arr[i] > maxItem) {
                maxIndex = i;
                maxItem = arr[i];
            }
            if(arr[i] < minItem) {
                minIndex = i;
                minItem = arr[i];
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[maxIndex];
        arr[maxIndex] = temp;
        for(int i = 0 ; i < n ; i++) {
            System.out.print(arr[i] + " ");
        }
        in.close();

    }
}