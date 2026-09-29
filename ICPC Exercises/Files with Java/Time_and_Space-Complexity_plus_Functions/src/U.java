// POW

import java.util.Scanner;

public class U {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long a = in.nextLong();
        long b = in.nextLong();
        long c = in.nextLong();

        solve(a, b, c);
        in.close();
    }

    static void solve(long a, long b, long c) {
        // لو الأس زوجي، بنقارن القيمة المطلقة
        if (c % 2 == 0) {
            long absA = Math.abs(a);
            long absB = Math.abs(b);
            if (absA > absB) {
                System.out.println(">");
            } else if (absA < absB) {
                System.out.println("<");
            } else {
                System.out.println("=");
            }
        }
        // لو الأس فردي، بنقارن الأعداد نفسها بإشاراتها الأصلية
        else {
            if (a > b) {
                System.out.println(">");
            } else if (a < b) {
                System.out.println("<");
            } else {
                System.out.println("=");
            }
        }
    }
}