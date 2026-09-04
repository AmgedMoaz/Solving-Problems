// Fixed Password

import java.util.Scanner;

public class D {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        int x;
        while(true) {
            x = in.nextInt();
            if(1999 == x) {
                System.out.println("Correct");
                break;
            }else {
                System.out.println("Wrong");
            }
        }
        in.close();

    }
}