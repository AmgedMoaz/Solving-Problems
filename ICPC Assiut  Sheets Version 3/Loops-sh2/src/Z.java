// Three Numbers

import java.util.Scanner;

public class Z {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        int k = in.nextShort();
        int s = in.nextShort();

        int counter = 0 , z = 0;
        int Min = Math.min(k,s);
        for(int x = 0 ; x <= Min ; x++) {
            for(int y = 0 ; y <= Min ; y++) {
                z = s-x-y;
                if(z >= 0 && z <= k) {
                    counter++;
                }
            }
        }
        System.out.println(counter);
        in.close();

    }
}