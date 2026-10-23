// Swap ?

import java.util.Scanner;
import java.util.Arrays;

public class K {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++)    arr[i] = in.nextInt();

        int [] copyArr = arr.clone();

        Arrays.sort(arr);
        int minValue = arr[0];
        int maxValue = arr[n-1];

        for(int i = 0 ; i < n ; i++) {
            if(copyArr[i] == minValue) {
                copyArr[i] = maxValue;
            }else if(copyArr[i] == maxValue) {
                copyArr[i] = minValue;
            }
            System.out.print(copyArr[i] + " ");
        }
        in.close();
    }
}