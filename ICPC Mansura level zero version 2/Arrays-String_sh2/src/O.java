// Is It Frequency

import java.util.Scanner;

public class O {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        int[] arr = new int[n];
        int []freq = new int[m+1];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();

            freq[arr[i]]++;
        }

        for(int i = 1 ; i < freq.length ; i++) {
            System.out.println(freq[i]);
        }
        in.close();
    }
}