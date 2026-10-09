// Vasya and Coins

import java.util.Scanner;

public class L {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        int a , b;
        while(t-- > 0) {
            a = scanner.nextInt();
            b = scanner.nextInt();

            long total = a + (b+b) + 1 ;
            if(a < 1) {
                System.out.println(1);
            }else {
                System.out.println(total);
            }
        }
        scanner.close();
    }
}