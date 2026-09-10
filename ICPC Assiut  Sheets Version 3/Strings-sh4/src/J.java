// Count Letters

import java.util.Scanner;

public class J {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.next();

        // 1. مصفوفة بحجم 26 لتخزين عدد تكرار كل حرف (a-z)
        int[] freq = new int[26];

        // 2. عدّ تكرار كل حرف في النص
        for (int i = 0; i < s.length(); i++) {
            freq[s.charAt(i) - 'a']++;
        }

        // 3. طباعة الحروف التي تكررت مرتبة أبجدياً
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                char ch = (char) (i + 'a');
                System.out.println(ch + " : " + freq[i]);
            }
        }
        in.close();

    }
}