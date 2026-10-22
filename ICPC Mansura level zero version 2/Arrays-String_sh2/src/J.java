// Palindrome Array

import java.util.Scanner;

public class J {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++)   arr[i] = in.nextInt();

        for(int i = 0 ; i <= n/2 ; i++) {
            if(! (arr[i] == arr[n-i-1]) ) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
        in.close();
    }
}