// Reorder Cards

import java.util.Arrays;
import java.util.Scanner;

public class T {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int h = in.nextInt();
        int w = in.nextInt();
        int n = in.nextInt();

        int[] a = new int[n];
        int[] b = new int[n];

        // مصفوفات لحفظ الصفوف والأعمدة الفريدة بغرض الترتيب
        int[] rows = new int[n];
        int[] cols = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
            b[i] = in.nextInt();
            rows[i] = a[i];
            cols[i] = b[i];
        }

        // ترتيب وإزالة التكرار للصفوف
        int[] uniqueRows = Arrays.stream(rows).distinct().sorted().toArray();
        // ترتيب وإزالة التكرار للأعمدة
        int[] uniqueCols = Arrays.stream(cols).distinct().sorted().toArray();

        // طباعة الإحداثيات الجديدة لكل كارت باستخدام Binary Search
        for (int i = 0; i < n; i++) {
            // البحث عن الترتيب الجديد للصف
            int newRow = Arrays.binarySearch(uniqueRows, a[i]) + 1;
            // البحث عن الترتيب الجديد للعمود
            int newCol = Arrays.binarySearch(uniqueCols, b[i]) + 1;

            System.out.println(newRow + " " + newCol);
        }

        in.close();
    }
}