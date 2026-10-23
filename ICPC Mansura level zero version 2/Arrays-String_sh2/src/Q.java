// cAPS lOCK

import java.util.Scanner;

public class Q {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();

        boolean allUpper = true;
        boolean firstLowerRestUpper = true;

        // 1. التحقق مما إذا كانت كل الحروف كبيرة
        for (int i = 0; i < s.length(); i++) {
            if (!Character.isUpperCase(s.charAt(i))) {
                allUpper = false;
                break;
            }
        }

        // 2. التحقق مما إذا كان الحرف الأول فقط صغير وباقي الحروف كبيرة
        if (s.length() > 0) {
            if (!Character.isLowerCase(s.charAt(0))) {
                firstLowerRestUpper = false;
            }
            for (int i = 1; i < s.length(); i++) {
                if (!Character.isUpperCase(s.charAt(i))) {
                    firstLowerRestUpper = false;
                    break;
                }
            }
        } else {
            firstLowerRestUpper = false;
        }

        // تطبيق الشروط وتعديل الكلمة
        if (allUpper) {
            // تحويل كل الكلمة إلى حروف صغيرة
            System.out.println(s.toLowerCase());
        } else if (firstLowerRestUpper) {
            // تحويل الحرف الأول إلى كبير وباقي الحروف إلى صغيرة
            String result = Character.toUpperCase(s.charAt(0)) + s.substring(1).toLowerCase();
            System.out.println(result);
        } else {
            // ترك الكلمة كما هي
            System.out.println(s);
        }

        in.close();
    }
}