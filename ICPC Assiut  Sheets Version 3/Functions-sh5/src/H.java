// N Times

import java.util.Scanner;

public class H {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            short n = in.nextShort();
            char c = in.next().charAt(0);
            times(n,c);
            System.out.println();
        }
        in.close();

    }
    static void times(short num , char ch) {
        for(int i = 0 ; i < num ; i++) {
            System.out.print(ch);
            if(i != num-1)
                System.out.print(" ");
        }
    }
}