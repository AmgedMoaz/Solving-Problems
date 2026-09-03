// Sharing Cookies

import java.util.Scanner;

public class K {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int a , b;
        a = in.nextInt();
        b = in.nextInt();

        if(a%3 == 0 || b%3 == 0 || (a+b)%3 == 0) {
            System.out.println("Possible");
        }else {
            System.out.println("Impossible");
        }
        in.close();

    }
}