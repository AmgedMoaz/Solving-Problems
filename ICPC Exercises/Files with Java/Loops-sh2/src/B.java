// Pair

import java.util.Scanner;

public class B {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short k = in.nextShort();

        int even = 0 , odd = 0;
        for(int i = 1 ; i <= k ; i++) {
            if(i%2 == 0) {
                even++;
            }else {
                odd++;
            }
        }
        System.out.println(even*odd);
        in.close();

    }
}