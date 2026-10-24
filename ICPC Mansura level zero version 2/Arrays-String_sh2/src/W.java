// Most Similar Words

import java.util.Scanner;

public class W {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();

            String[] words = new String[n];
            for (int i = 0; i < n; i++) {
                words[i] = scanner.next();
            }

            int minDiff = Integer.MAX_VALUE;

            // حلقة تكرار مزدوجة لتجربة كل الأزواج (i, j) حيث i < j
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    int currentDiff = 0;

                    // حساب الفرق بين الكلمتين الحرف بحرف
                    for (int k = 0; k < m; k++) {
                        currentDiff += Math.abs(words[i].charAt(k) - words[j].charAt(k));
                    }

                    // تحديث أقل فرق تم الوصول إليه
                    minDiff = Math.min(minDiff, currentDiff);
                }
            }

            System.out.println(minDiff);
        }

        scanner.close();
    }
}