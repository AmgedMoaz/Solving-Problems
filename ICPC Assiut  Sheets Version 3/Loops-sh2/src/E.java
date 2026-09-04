// Max

import java.util.Scanner;

public class E {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int x , max = 0;
        for(int i = 0 ; i < n ; i++) {
            x = in.nextInt();
            if(x >= max)
                max = x;
        }

        System.out.println(max);
        in.close();

    }
}