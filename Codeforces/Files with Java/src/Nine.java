// Minimum Size Subarray Sum
// Write a code to solve the problem by using sliding window with dynamic size technique

import java.util.Scanner;

public class Nine {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int target = in.nextInt();

        int []arr = new int[n];
        for(int i = 0 ; i < n ; i++)   arr[i] = in.nextInt();

        int left = 0 , minAns = Integer.MAX_VALUE;
        long currentSum = 0;
        for(int right = 0 ; right < n ; right++) {
            currentSum += arr[right];

            while(currentSum >= target) {
                minAns = Math.min(minAns,right-left+1);
                currentSum -= arr[left];
                left++;
            }
        }

        // لو minAns متغيّرتش، معناه مفيش Subarray بتحقق الشرط، فنرجع 0
        if(minAns == Integer.MAX_VALUE) {
            System.out.println(0);
        }else {
            System.out.println(minAns);
        }
        in.close();;
    }
}
