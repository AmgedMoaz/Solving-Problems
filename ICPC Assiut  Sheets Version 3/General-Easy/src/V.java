// Is it rated?

import java.util.Scanner;

public class V {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        boolean isRated = false;
        boolean hasInversion = false;

        int current = 4126;

        while(n-- > 0) {
            int a = in.nextInt();
            int b = in.nextInt();

            if(a != b) {
                isRated = true;
            }

            if(current < a) {
                hasInversion = true;
            }
            current = a;
        }

        if(isRated) {
            System.out.println("rated");
        } else {
            if(hasInversion) {
                System.out.println("unrated");
            } else {
                System.out.println("maybe");
            }
        }

        in.close();
    }
}