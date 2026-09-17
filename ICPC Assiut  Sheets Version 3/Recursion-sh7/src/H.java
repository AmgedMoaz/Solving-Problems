// Inverted Pyramid

import java.util.Scanner;

public class H {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        printInvertedPyramid(n,n);
        in.close();
    }
    static void printInvertedPyramid(int num , int current) {
        if(current < 0)
            return;                                  // base case

        for(int i = 0 ; i < num-current ; i++) {
            System.out.print(" ");
        }

        for(int i = (2*current-1) ; i > 0 ; i--) {
            System.out.print("*");
        }
        System.out.println();

        printInvertedPyramid(num,current-1);  // recursive case
    }
}