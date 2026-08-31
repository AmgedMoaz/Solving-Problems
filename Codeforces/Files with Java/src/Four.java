// Write a code to solve problem by using two pointers technique

import java.util.Scanner;

public class Four {
    static Scanner input = new Scanner(System.in);
    static public  void main(String[] args) {

        int t;
        t = input.nextInt();

        while(t > 0) {
            solve();
            t--;
        }

    }
    // Solve method
    static void solve() {
        int n;
        n = input.nextInt();

        long[] arr = new long[n];
        long sum = 0 , operation = 0;
        boolean isNegative = false;
        for(int i = 0 ; i < n ; i++) {
            arr[i] = input.nextLong();
            sum += Math.abs(arr[i]);

            if(arr[i] < 0) {
                if(! isNegative) {
                    operation ++;
                    isNegative = true;
                }
            }else if(arr[i] > 0) {
                isNegative = false;
            }
        }
        System.out.println(sum + " " + operation);
    }
}