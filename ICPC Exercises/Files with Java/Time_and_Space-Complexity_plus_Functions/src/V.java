// Worms Evolution

import java.util.Scanner;

public class V {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int arr[] = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        solve(arr);
        in.close();
    }

    static void solve(int[] arr) {
        // Time complexity = O(n3)
        for(int i = 0 ; i < arr.length ; i++) {
            for(int j = 0 ; j < arr.length ; j++) {
                for(int k = 0 ; k < arr.length ; k++) {
                    if(i != j && i != k && j != k) {
                        if(arr[i] == arr[j] + arr[k]) {
                            System.out.println((i+1) + " " + (j+1) + " " + (k+1));
                            return;
                        }
                    }
                }

            }
        }
        System.out.println(-1);
    }
}