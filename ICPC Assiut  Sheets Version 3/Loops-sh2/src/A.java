// 1 to N

import java.util.Scanner;

public class A {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();

        int i = 1;
        while(i <= n) {
            System.out.println(i);
            i++;
        }
        in.close();

    }
}