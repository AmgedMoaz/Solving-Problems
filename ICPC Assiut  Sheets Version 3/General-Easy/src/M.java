// The New Year: Meeting Friends

import java.util.Scanner;
import java.util.Arrays;

public class M {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] x = new int[3];
        x[0] = in.nextInt();
        x[1] = in.nextInt();
        x[2] = in.nextInt();

        Arrays.sort(x); // ترتيب الأرقام

        // المسافة الكلية هي الفرق بين أكبر رقم (x[2]) وأصغر رقم (x[0])
        System.out.println(x[2] - x[0]);
        in.close();
    }
}