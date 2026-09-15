// Erasing Zeroes

import java.util.Scanner;

public class S {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        while (t-- > 0) {

            String row = in.next();

            int counter = 0;
            int oneBegin = -1;
            int oneEnd = -1;

            for (int i = 0; i < row.length(); i++) {

                if (row.charAt(i) == '1') {

                    if (oneBegin == -1) {
                        oneBegin = i;
                    }

                    oneEnd = i;
                }
            }

            for (int j = oneBegin; j < oneEnd; j++) {
                if (row.charAt(j) == '0') {
                    counter++;
                }
            }

            System.out.println(counter);
        }
        in.close();

    }
}