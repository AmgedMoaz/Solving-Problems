// Pangram

import java.util.HashSet;
import java.util.Scanner;

public class Z {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String phrase = in.next();

        // استخدام HashSet لتخزين الحروف الفريدة بدون تكرار
        HashSet<Character> letters = new HashSet<>();

        for (int i = 0; i < phrase.length(); i++) {
            // تحويل الحرف إلى حرف صغير لإلغاء التفرقة بين Capital و small
            char c = Character.toLowerCase(phrase.charAt(i));
            letters.add(c);
        }

        // إذا كان عدد الحروف الفريدة 26، إذن الكلمة Pangram
        if (letters.size() == 26) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        in.close();

    }
}