// Hard Compare

import java.util.Scanner;

public class Z {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int a , c;
        long b , d;
        a = input.nextInt();
        b = input.nextLong();
        c = input.nextInt();
        d = input.nextLong();

        // Mechanism using logarithmic
        double left = b*(Math.log(a));
        double right = d*(Math.log(c));

        if(left > right) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }

    }
}