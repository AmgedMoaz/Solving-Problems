// Sail

import java.util.Scanner;

public class T {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        long Sx = in.nextLong();
        long Sy = in.nextLong();
        long Ex = in.nextLong();
        long Ey = in.nextLong();

        int earliest_time = -1;
        long Dx = Ex - Sx;
        long Dy = Ey - Sy;

        String wind = in.next();
        for(int i = 0 ; i < wind.length() ; i++) {
            char dir = wind.charAt(i);

            // التحرك فقط إذا كانت الرياح في الاتجاه المطلوب
            if (dir == 'E' && Dx > 0) {
                Dx--; // نقترب خطوة نحو الشرق
            } else if (dir == 'W' && Dx < 0) {
                Dx++; // نقترب خطوة نحو الغرب
            } else if (dir == 'N' && Dy > 0) {
                Dy--; // نقترب خطوة نحو الشمال
            } else if (dir == 'S' && Dy < 0) {
                Dy++; // نقترب خطوة نحو الجنوب
            }

            // إذا وصلنا للهدف (أصبحت المسافات المتبقية صفر)
            if (Dx == 0 && Dy == 0) {
                earliest_time = i + 1; // رقم الثانية (نضيف 1 لأن التكرار يبدأ من 0)
                break; // نخرج فوراً للحصول على "أبكر وقت"
            }
        }
        System.out.println(earliest_time);
        in.close();

    }
}