// Strange Summation

import java.util.Scanner;

public class G1 {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        long n = in.nextLong();
        long m = in.nextLong();

        long lastDig1 = n%10;
        long lastDig2 = m%10;

        System.out.println( (lastDig1+lastDig2) );
        in.close();;
    }
}