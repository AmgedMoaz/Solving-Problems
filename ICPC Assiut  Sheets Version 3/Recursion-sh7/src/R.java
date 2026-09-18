// Palindrome Array

import java.util.Scanner;

public class R {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i = 0 ; i < arr.length ; i++)
            arr[i] = in.nextInt();

        if(isPalindrome(arr,0)) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();
    }

    static boolean isPalindrome(int []arr , int index) {
        if(index >= arr.length/2)
            return true;                             // base case

        if(arr[index] != arr[arr.length-index-1]) {
            return false;                            // base case
        }else {
            return isPalindrome(arr,index+1);  // recursive case
        }
    }
}