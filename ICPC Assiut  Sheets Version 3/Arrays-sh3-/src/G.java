// Palindrome Array

import java.util.Scanner;

public class G {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }

        boolean isPalindrome = true;
        for(int i = 0 , j = n-1 ; i < j ; i++ , j--) {
            if(arr[i] != arr[j]) {
                isPalindrome = false;
                break;
            }
        }
        if(isPalindrome) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();

    }
}