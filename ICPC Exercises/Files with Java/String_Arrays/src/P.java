// Petr and Book

import java.util.Scanner;

public class P {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] arr = new int[7];

        for (int i = 0; i < 7; i++) {
            arr[i] = in.nextInt();
        }

        int sum = 0;
        int x = 0;

        while (true) {
            sum += arr[x];

            if (sum >= n) {
                System.out.println(x + 1);
                break;
            }

            x++;

            if (x == 7) {
                x = 0;
            }
        }
        in.close();

    }
}