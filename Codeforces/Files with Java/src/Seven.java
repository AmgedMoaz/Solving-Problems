// Ski Resort
// Write a code to solve problem by using two pointer and sliding window techniques

import java.util.Scanner;

public class Seven {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        short t;
        t = input.nextShort();

        while(t > 0) {
            int n ;
            long k , q;
            n = input.nextInt();
            k = input.nextLong();
            q = input.nextLong();
            long []arr = new long[n];
            for(int i = 0 ; i < n ; i++)
                arr[i] = input.nextInt();

            long l = 0;
            long total_way = 0;
            for(int r = 0 ; r < n ; r++) {
                if(arr[r] > q) {
                    l = r+1;
                }else {
                    long length = r-l+1;
                    if(length >= k)
                        total_way += (length-k+1);
                }
            }
            System.out.println(total_way);
            t--;
        }
    }
}