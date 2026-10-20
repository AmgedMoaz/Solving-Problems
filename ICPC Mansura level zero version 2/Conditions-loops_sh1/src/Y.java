// Hard Problem

import java.util.Scanner;
import java.util.Arrays;

public class Y {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        long[] arr = new long[3];
        arr[0] = in.nextLong();
        arr[1] = in.nextLong();
        arr[2] = in.nextLong();

        // ترتيب العناصر تصاعدياً بكل سهولة
        Arrays.sort(arr);

        System.out.println(arr[0] + " " + arr[1] + " " + arr[2]);

        in.close();
    }
}