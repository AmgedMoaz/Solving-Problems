// Max Sum Subarray of size K
// Write a code to solve the problem by using sliding window technique

import java.util.Scanner;

public class Eight {
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);

    int n = in.nextInt();
    int k = in.nextInt();

    int[] arr = new int[n];
    for(int i = 0 ; i < n ; i++)     arr[i] = in.nextInt();

    long windowSum = 0;
    for(int j = 0 ; j < k ; j++)     windowSum += arr[j];

    long maxSum = windowSum;
    for(int i = k ; i < n ; i++) {
        windowSum -= arr[i-k];
        windowSum += arr[i];
        maxSum = Math.max(windowSum,maxSum);
    }
        System.out.println(maxSum);
    in.close();;
    }
}
