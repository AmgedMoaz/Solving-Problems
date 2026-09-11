// Min Cost String

import java.util.Scanner;

public class Y {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        if (!in.hasNext()) return;
        char[] s = in.next().toCharArray();
        int[] cost = new int[26];
        for (int i = 0; i < 26; i++) {
            cost[i] = in.nextInt();
        }

        int n = s.length;

        // معالجة الأطراف إذا كانت تبدأ أو تنتهي بـ '?'
        // نبحث عن أول حرف غير '?' لملء البداية به
        int firstCharIdx = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] != '?') {
                firstCharIdx = i;
                break;
            }
        }

        if (firstCharIdx == -1) {
            // إذا كان النص كله '?'، نملؤه بالكامل بحرف 'a' لأنه يعطي أصغر ترتيب أبجدي وأقل تكلفة ممكنة
            long totalCost = 0;
            for (int i = 0; i < n; i++) {
                s[i] = 'a';
            }
            System.out.println(totalCost);
            System.out.println(new String(s));
            in.close();
            return;
        }

        // ملء الأجزاء التي في أقصى اليسار قبل أول حرف معروف
        for (int i = firstCharIdx - 1; i >= 0; i--) {
            s[i] = s[i + 1];
        }

        // ملء الأجزاء التي في أقصى اليمين بعد آخر حرف معروف
        for (int i = 0; i < n; i++) {
            if (s[i] != '?') {
                firstCharIdx = i; // سنستخدمه لتتبع آخر حرف معروف
            } else {
                // إذا وجدنا '?' في المنتصف أو النهاية
                // نبحث عن الحرف التالي المعروف لتقييم الاختيار الأفضل
                int nextKnownIdx = -1;
                for (int j = i + 1; j < n; j++) {
                    if (s[j] != '?') {
                        nextKnownIdx = j;
                        break;
                    }
                }

                char prevChar = s[i - 1];
                if (nextKnownIdx != -1) {
                    char nextChar = s[nextKnownIdx];
                    // إذا كانت الـ '?' محصورة بين حرفين، نختار الحرف الأنسب بين 'a' و 'z'
                    char bestChar = 'a';
                    int minAddCost = Integer.MAX_VALUE;

                    for (char c = 'a'; c <= 'z'; c++) {
                        int currentAddCost = Math.abs(cost[prevChar - 'a'] - cost[c - 'a']) +
                                Math.abs(cost[c - 'a'] - cost[nextChar - 'a']);
                        if (currentAddCost < minAddCost) {
                            minAddCost = currentAddCost;
                            bestChar = c;
                        }
                    }
                    s[i] = bestChar;
                } else {
                    // إذا لم يتبق حروف معروفة في اليمين، نكرر الحرف السابق
                    s[i] = prevChar;
                }
            }
        }

        // حساب التكلفة النهائية للنص بعد التعديل
        long totalCost = 0;
        for (int i = 0; i < n - 1; i++) {
            totalCost += Math.abs(cost[s[i] - 'a'] - cost[s[i + 1] - 'a']);
        }
        System.out.println(totalCost);
        System.out.println(new String(s));
        in.close();

    }
}