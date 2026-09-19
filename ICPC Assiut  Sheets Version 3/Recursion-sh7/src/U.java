// Knapsack

import java.util.Scanner;

public class U {
    static int n;
    static int W;
    static int[] w;
    static int[] v;
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        n = in.nextInt();
        W = in.nextInt();

        w = new int[25];
        v = new int[25];

        for(int i = 0 ; i < n ; i++) {
            w[i] = in.nextInt();
            v[i] = in.nextInt();
        }

        System.out.println(knapsack(0,W));

        in.close();
    }
    static int knapsack(int i , int remaining) {
        if(i == n)
            return 0;                                                 // base case

        int notTake = knapsack(i+1,remaining);                      // recursive case

        int take = 0;

        if(w[i] <= remaining)
            take = v[i] + knapsack(i+1,remaining - w[i]);    // recursive case

        return Math.max(take,notTake);
    }
}