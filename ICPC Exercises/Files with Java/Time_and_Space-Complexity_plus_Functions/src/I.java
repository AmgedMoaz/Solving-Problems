// Maximize Sum of Digits

import java.util.Scanner;

public class I {

    // دالة لحساب مجموع الأرقام
    static long sumDigits(long n) {
        long sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        in.close();

        String best = s; // نبدأ بأن أفضل رقم هو الرقم الأصلي نفسه

        // نجرب تقليل كل خانة ووضع تسعات بعدها
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) > '0') {
                StringBuilder temp = new StringBuilder(s);
                // إنقاص الخانة الحالية بمقدار 1
                temp.setCharAt(i, (char) (temp.charAt(i) - 1));

                // جعل كل الخانات التي تليها تساوي '9'
                for (int j = i + 1; j < temp.length(); j++) {
                    temp.setCharAt(j, '9');
                }

                long curVal = Long.parseLong(temp.toString());
                long bestVal = Long.parseLong(best);

                // تحويل القيمة الرقمية إلى نص لضمان عدم وجود أصفار في البداية
                String curStr = Long.toString(curVal);

                // مقارنة مجموع الأرقام، ولو تساوى المجموع نختار الأكبر في القيمة
                if (sumDigits(curVal) > sumDigits(bestVal) ||
                        (sumDigits(curVal) == sumDigits(bestVal) && curVal > bestVal)) {
                    best = curStr;
                }
            }
        }

        System.out.println(best);
    }
}