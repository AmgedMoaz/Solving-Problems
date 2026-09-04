// Even, Odd, Positive and Negative

import java.util.Scanner;

public class C {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int x , even = 0 , pos = 0 , odd = 0 , neg = 0;
        for(int i = 0 ; i < n ; i++) {
            x = in.nextInt();
            if(x%2 == 0) {
                even++;
            }
            if(x > 0) {
                pos++;
            }
            if(x < 0) {
                neg++;
            }
            if(x%2 != 0) {
                odd++;
            }
        }

        System.out.println("Even: " + even);
        System.out.println("Odd: " + odd);
        System.out.println("Positive: " + pos);
        System.out.println("Negative: " + neg);
        in.close();

    }
}