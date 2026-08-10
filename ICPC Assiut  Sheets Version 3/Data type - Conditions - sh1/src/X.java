// Two intervals

import java.util.Scanner;

public class X {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int l1 , r1 , l2 , r2;
        l1 = input.nextInt();
        r1 = input.nextInt();
        l2 = input.nextInt();
        r2 = input.nextInt();

        // Mechanism finding interval
        int left = Math.max(l1,l2);
        int right = Math.min(r1,r2);

        if(left <= right) {
            System.out.println(left + " " + right);
        }else {
            System.out.println(-1);
        }

    }
}