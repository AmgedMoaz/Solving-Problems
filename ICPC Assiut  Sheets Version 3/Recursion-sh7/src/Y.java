// Number of Ways

import java.util.Scanner;

public class Y {
    static short s;
    static short e;
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        s = in.nextShort();
        e = in.nextShort();

        System.out.println(countWays(s,e));
        in.close();
    }
    static int countWays(int current, int target) {
        if (current == target) {
            return 1;                                              // base case
        }

        if (current > target) {
            return 0;                                              // base case
        }

        // نجرب الاحتمالات الثلاثة (1، 2، أو 3 خطوات) ونجمع النتائج
        return countWays(current + 1, target) +
                countWays(current + 2, target) +
                countWays(current + 3, target);             // recursive case
    }
}