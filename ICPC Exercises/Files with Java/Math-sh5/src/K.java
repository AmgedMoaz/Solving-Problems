// Square Counting

import java.util.Scanner;

public class K {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while(t-- > 0) {
            long n = scanner.nextLong();
            long s = scanner.nextLong();

            System.out.println( ( s/(n*n) ));
        }
        scanner.close();
    }
}