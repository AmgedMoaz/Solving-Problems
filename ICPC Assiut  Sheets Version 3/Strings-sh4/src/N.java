// Max Subsequence

import java.util.Scanner;

public class N {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String s = in.next();

        int count = 1; // الحرف الأول يُحتسب دائماً
        for (int i = 1; i < n; i++) {
            if (s.charAt(i) != s.charAt(i - 1)) {
                count++;
            }
        }
        System.out.println(count);
        in.close();

    }
}