// Dima and Friends

import java.util.Scanner;

public class M {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt(); // عدد أصدقاء ديما
        int totalFingers = 0;

        // قراءة أصابع الأصدقاء وحساب المجموع الكلي لهم
        for (int i = 0; i < n; i++) {
            totalFingers += in.nextInt();
        }

        int count = 0;
        int totalPeople = n + 1; // إجمالي عدد الأشخاص في الدائرة (ديما + أصدقاؤه)

        // نجرب كل الخيارات الممكنة لأصابع ديما من 1 إلى 5
        for (int dimaFingers = 1; dimaFingers <= 5; dimaFingers++) {
            int currentTotal = totalFingers + dimaFingers;

            int loser = (currentTotal - 1) % totalPeople + 1;

            if (loser != 1) {
                count++;
            }
        }

        System.out.println(count);
        in.close();

    }
}