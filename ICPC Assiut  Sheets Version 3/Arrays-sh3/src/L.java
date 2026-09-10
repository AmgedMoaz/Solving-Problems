// Max Subarray

import java.util.Scanner;

public class L {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        while (t > 0) {
            int n = in.nextInt();
            int[] arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = in.nextInt();
            }

            // توليد كل المجموعات الجزئية متصلة
            for (int i = 0; i < n; i++) {
                int max = arr[i];
                for (int j = i; j < n; j++) {
                    // تحديث أعلى قيمة في النطاق الحالي من i إلى j
                    max = Math.max(max, arr[j]);
                    System.out.print(max + " ");
                }
            }
            System.out.println(); // سطر جديد لكل test case
            t--;
        }
        in.close();

    }
}