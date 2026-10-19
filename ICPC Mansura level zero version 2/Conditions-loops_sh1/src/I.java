// Domino piling

import java.util.Scanner;

public class I {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int m = in.nextInt();
        int n = in.nextInt();

        int result = (m*n)/2;
        System.out.println(result);
        in.close();;
    }
}