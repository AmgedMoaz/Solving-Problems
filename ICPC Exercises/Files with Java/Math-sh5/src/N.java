// Food for Animals

import java.util.Scanner;

public class N {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        int a , b , c , x ,y;
        while(t-- > 0) {
            a = scanner.nextInt();
            b = scanner.nextInt();
            c = scanner.nextInt();
            x = scanner.nextInt();
            y = scanner.nextInt();

            if(a < x) {
                if(a+c >= x) {
                    c -= x-a;
                }else {
                    System.out.println("NO");
                    continue;
                }
            }

            if(b < y) {
                if(b+c >= y) {
                    c -= y-b;
                }else {
                    System.out.println("NO");
                    continue;
                }
            }
            System.out.println("YES");
        }
        scanner.close();
    }
}