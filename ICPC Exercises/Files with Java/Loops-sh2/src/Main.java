// Beautiful Matrix

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int r = 0, c = 0;

        // 1. قراءة المصفوفة وتحديد موقع الرقم 1
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                int val = in.nextInt();
                if (val == 1) {
                    r = i; // رقم الصف
                    c = j; // رقم العمود
                }
            }
        }

        int moves = 0;

        // 2. تحريك الرقم 1 رأسياً نحو الصف الثالث باستخدام اللوب
        while (r != 3) {
            if (r < 3) {
                r++; // تحريك لأسفل
            } else {
                r--; // تحريك لأعلى
            }
            moves++;
        }

        // 3. تحريك الرقم 1 أفقياً نحو العمود الثالث باستخدام اللوب
        while (c != 3) {
            if (c < 3) {
                c++; // تحريك لليمين
            } else {
                c--; // تحريك لليسار
            }
            moves++;
        }
        System.out.println(moves);
        in.close();

    }
}