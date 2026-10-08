// Even Array

import java.util.Scanner;

public class E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int[] a = new int[n];

            int evenCount = 0; // عدد الأعداد الزوجية
            int oddCount = 0;  // عدد الأعداد الفردية

            for (int i = 0; i < n; i++) {
                a[i] = in.nextInt();
                if (a[i] % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }
            }

            // عدد المؤشرات الزوجية والفردية المطلوبة في المصفوفة
            int requiredEvens = (n + 1) / 2;
            int requiredOdds = n / 2;

            // إذا لم تتطابق أعداد الأعداد الزوجية والفردية مع المتاح، استحال الحل
            if (evenCount != requiredEvens || oddCount != requiredOdds) {
                System.out.println(-1);
                continue;
            }

            // حساب عدد المؤشرات الزوجية التي تحتوي على أعداد فردية (أي في غير مكانها)
            int misplacedEvens = 0;
            for (int i = 0; i < n; i += 2) {
                if (a[i] % 2 != 0) {
                    misplacedEvens++;
                }
            }

            System.out.println(misplacedEvens);
        }
        in.close();
    }
}