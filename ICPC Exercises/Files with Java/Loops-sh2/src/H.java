// Wrong Subtraction

import java.util.Scanner;

public class H {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        short k = in.nextShort();

        while(k > 0) {
            if(n%10 == 0) {
                n /= 10;
            }else {
                n -= 1;
            }
            k--;
        }
        System.out.println(n);
        in.close();

    }
}