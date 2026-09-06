// Find Digits

import java.util.Scanner;

public class M {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t > 0) {
            int n = in.nextInt();
            int temp = n;
            int counter = 0;
            while(temp > 0) {
                if((temp%10 != 0) && n % (temp%10) == 0) {
                    counter++;
                }
                temp /= 10;
            }
            System.out.println(counter);
            t--;
        }
        in.close();

    }
}