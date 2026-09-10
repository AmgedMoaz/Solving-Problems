// Range sum query

import java.util.Scanner;

public class Y {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int  q = in.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) arr[i] = in.nextInt();
        long[] prefix = new long[n];
        for(int i = 0 ; i < n ; i++) {
            if(i == 0)
                prefix[i] += arr[i];
            else {
                prefix[i] += prefix[i-1] + arr[i];
            }
        }
        while(q-- > 0) {
            int l = in.nextInt();
            int r = in.nextInt();
            r--;  l--;
            if(l == 0) {
                System.out.println(prefix[r]);
            }else {
                System.out.println(prefix[r] - prefix[l-1]);
            }
        }
        in.close();

    }
}