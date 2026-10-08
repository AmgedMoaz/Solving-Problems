// Floor Number

import java.util.Scanner;

public class I {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while(t-- > 0) {
            int n = scanner.nextInt();
            int x = scanner.nextInt();

            if(n <= 2) {
                System.out.println(1);
                continue;
            }
            int floor = (n-3)/x +2;
            System.out.println(floor);
        }
        scanner.close();
    }
}