// Difference

import java.util.Scanner;

public class E {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        long a = in.nextLong();
        long b = in.nextLong();
        long c = in.nextLong();
        long d = in.nextLong();

        long expression = (a*b) - (c*d);
        System.out.println("DIFERENCA = "+expression);
        in.close();;
    }
}