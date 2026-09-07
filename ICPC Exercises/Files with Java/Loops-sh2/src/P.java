// Medium Number

import java.util.Scanner;

public class P {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while(t > 0) {
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();

            int Min = Math.min(a,Math.min(b,c));
            int Max = Math.max(a,Math.max(b,c));
            int sum = a + b + c;
            System.out.println(sum-(Max+Min));
            t--;
        }
        in.close();

    }
}