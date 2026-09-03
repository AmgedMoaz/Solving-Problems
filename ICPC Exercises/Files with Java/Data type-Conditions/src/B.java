// Restricted

import java.util.Scanner;

public class B {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();

        if((a+b) < 10) {
            System.out.println((a+b));
        }else {
            System.out.println("error");
        }
        in.close();

    }
}