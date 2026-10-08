// Plus or Minus

import java.util.Scanner;

public class A {
    public static void main(String []argv) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while(t-- > 0) {
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();

            if(a + b == c) {
                System.out.println("+");
            }else if(a - b == c) {
                System.out.println("-");
            }
        }
        in.close();
    }
}