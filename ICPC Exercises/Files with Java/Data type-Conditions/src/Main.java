// Expired?

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        long x = in.nextLong();
        long a = in.nextLong();
        long b = in.nextLong();

        if(b <= a) {
            System.out.println("delicious");
        }else if(b-a <= x) {
            System.out.println("safe");
        }else {
            System.out.println("dangerous");
        }
        in.close();

    }
}