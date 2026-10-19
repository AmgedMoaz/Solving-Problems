// Intersection

import java.util.Scanner;

public class G2 {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        long l1 = in.nextLong();
        long r1 = in.nextLong();
        long l2 = in.nextLong();
        long r2 = in.nextLong();

        long maxLeft = Math.max(l1,l2);
        long minRight = Math.min(r1,r2);

        if(minRight < maxLeft) {
            System.out.println(-1);
        }else {
            System.out.println(maxLeft + " " + minRight);
        }
        in.close();;
    }
}