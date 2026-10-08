// Soldier and Bananas

import java.util.Scanner;

public class F {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        if (scanner.hasNextLong()) {
            long k = scanner.nextLong();
            long n = scanner.nextLong();
            long w = scanner.nextLong();

            // حساب التكلفة الإجمالية لشراء w موزات
            long totalCost = k * w * (w + 1) / 2;

            // حساب المبلغ الذي يحتاج لاقتراضه
            long borrow = totalCost - n;

            // إذا كان لديه ما يكفي أو أكثر، فلن يقترض شيئاً (النتيجة 0)
            if (borrow < 0) {
                borrow = 0;
            }

            System.out.println(borrow);
        }
        scanner.close();
    }
}