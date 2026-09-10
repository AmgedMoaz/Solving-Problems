// Frequency Array

import java.util.Scanner;

public class V {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        int [] arr = new int[n];
        for(int i = 0 ; i < n ; i++) arr[i] = in.nextInt();

        int [] freq = new int[m+1];
        for(int i = 0 ; i < n ; i++) {
            freq[arr[i]]++;
        }
        for(int i = 1 ; i <= m ; i++) {
            System.out.println(freq[i]);
        }
        in.close();

    }
}