// Helpful Maths

import java.util.Arrays;
import java.util.Scanner;

public class V {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String sum = in.next();

        // فصل النص بناءً على علامة الزائد للحصول على الأرقام فقط
        String[] numbers = sum.split("\\+");

        // ترتيب الأرقام تصاعدياً
        Arrays.sort(numbers);

        // طباعة النتيجة مع وضع علامة + بينها
        for(int i = 0; i < numbers.length; i++) {
            System.out.print(numbers[i]);
            if(i != numbers.length - 1) {
                System.out.print("+");
            }
        }
        in.close();

    }
}