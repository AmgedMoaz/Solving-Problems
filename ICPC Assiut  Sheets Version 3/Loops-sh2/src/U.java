// Some Sums

import java.util.Scanner;

public class U {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        short a = in.nextShort();
        short b = in.nextShort();

        int sum = 0;
        for(int i = 1 ; i <= n ; i++) {
            int temp = i , container = 0;
            while(temp > 0) {
                container += (temp%10);
                temp /= 10;
            }
            if(container >= a && container <= b) {
                sum += i;
            }
        }
        System.out.println(sum);
        in.close();

    }
}