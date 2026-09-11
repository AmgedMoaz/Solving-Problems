// Comparison

import java.util.Scanner;
import java.util.Arrays;

public class X {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.next();

        String answer = s;

        // نقف قبل الحرف الأخير لضمان تقسيم النص إلى قسمين غير فارغين
        for (int i = 0; i < s.length() - 1; i++) {

            // القسم الأول: من بداية النص وحتى المؤشر الحالي
            String sub1 = s.substring(0, i + 1);
            // القسم الثاني: من بعد المؤشر وحتى نهاية النص
            String sub2 = s.substring(i + 1);

            // ترتيب القسم الأول
            char[] arr1 = sub1.toCharArray();
            Arrays.sort(arr1);
            String sortedSub1 = new String(arr1);

            // ترتيب القسم الثاني
            char[] arr2 = sub2.toCharArray();
            Arrays.sort(arr2);
            String sortedSub2 = new String(arr2);

            // دمج القسمين بعد الترتيب
            String current = sortedSub1 + sortedSub2;

            // تحديث الإجابة إذا كانت النتيجة الحالية أصغر أبجدياً
            if (current.compareTo(answer) < 0) {
                answer = current;
            }
        }
        System.out.println(answer);
        in.close();

    }
}