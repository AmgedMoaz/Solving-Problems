// Free Ice Cream

import java.util.Scanner;

public class O {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        long sum = in.nextLong();

        int counter = 0;
        while (n-- > 0) {
            char ch = in.next().charAt(0);
            long d = in.nextLong();

            if (ch == '+') {
                sum += d;
            } else {
                if (d <= sum) {
                    sum -= d;
                } else {
                    counter++;
                }
            }
        }
        System.out.println(sum + " " + counter);
        in.close();
    }
}