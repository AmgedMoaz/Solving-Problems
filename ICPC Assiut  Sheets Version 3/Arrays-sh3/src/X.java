// 8 Neighbors

import java.util.Scanner;

public class X {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        char[][] arr = new char[n][m];
        for (int i = 0; i < n; i++) {
            String row = in.next();
            for (int j = 0; j < m; j++) {
                arr[i][j] = row.charAt(j);
            }
        }

        int x = in.nextInt() - 1;
        int y = in.nextInt() - 1;

        // المرور على المربع (3x3) المحيط بالخلية
        for (int i = x - 1; i <= x + 1; i++) {
            for (int j = y - 1; j <= y + 1; j++) {

                // نلتزم فقط بالخلايا التي داخل الحدود، وتجنب الخلية نفسها
                if (i >= 0 && i < n && j >= 0 && j < m) {
                    if (i == x && j == y) continue; // تجنب الخلية المطلوبة نفسها

                    // إذا وجدنا أي جار ليس 'x' نطبع no ونغلق البرنامج
                    if (arr[i][j] != 'x') {
                        System.out.println("no");
                        return;
                    }
                }
            }
        }
        System.out.println("yes");
        in.close();

    }
}