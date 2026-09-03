// RGB Cards

import java.util.Scanner;

public class H {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int r = in.nextInt();
        int g = in.nextInt();
        int b = in.nextInt();

        int number = r*100 + g*10 + b;

        if(number%4 == 0) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();
    }
}