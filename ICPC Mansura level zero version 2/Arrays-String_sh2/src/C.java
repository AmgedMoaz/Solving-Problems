// Positions

import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int arr[] = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
            if(arr[i] <= 10) {
                System.out.println("A[" + i + "] = " + arr[i]);
            }
        }
        in.close();
    }
}