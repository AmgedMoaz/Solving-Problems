// Pyramid

import java.util.Scanner;

public class G {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        printPyramid(n, 1);
        in.close();
    }
    static void printPyramid(int n, int current) {
        if (current > n) {
            return;
        }

        for (int i = 0; i < n - current; i++) {
            System.out.print(" ");
        }

        for (int i = 0; i < 2 * current - 1; i++) {
            System.out.print("*");
        }

        // الانتقال للسطر التالي
        System.out.println();

        // Recursive case: استدعاء الدالة للصف التالي
        printPyramid(n, current + 1);
    }
}