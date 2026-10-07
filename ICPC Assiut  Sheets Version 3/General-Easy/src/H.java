// Presents

import java.util.Scanner;

public class H {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int []arr = new int[101];
        int value;
        for(int i = 1 ; i <= n ; i++) {
            value = in.nextInt();
            arr[value] = i;
        }
        for(int i = 1 ; i <= n ; i++) {
            System.out.print(arr[i] + " ");
        }
        in.close();
    }
}