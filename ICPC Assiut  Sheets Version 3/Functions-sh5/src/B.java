// Print

import java.util.Scanner;

public class B {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        print(n);
        in.close();

    }
    static void print(short num) {
        for(int i = 1 ; i <= num ; i++) {
            System.out.print(i);
            if(i != num)
                System.out.print(" ");
        }
    }
}