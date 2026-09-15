// Colourblindness

import java.util.Scanner;

public class K {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while (t-- > 0) {
            short n = in.nextShort();
            String row1 = in.next();
            String row2 = in.next();

            // استبدال 'B' بـ 'G' نظراً لأن الشخص يراهما نفس اللون
            row1 = row1.replace('B', 'G');
            row2 = row2.replace('B', 'G');

            if (row1.equals(row2)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        in.close();

    }
}