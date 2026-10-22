// Lowest Number

import java.util.Scanner;

public class F {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int[] arr = new int[n];
        int minValue = 0 , index = 0;
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
            if(i == 0)  minValue = arr[i];

            if(minValue > arr[i]) {
                minValue = arr[i];
                index = i;
            }
        }
        System.out.println( minValue + " " + (index+1) );
        in.close();
    }
}