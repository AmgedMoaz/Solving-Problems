// Max Number

import java.util.Scanner;

public class K {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        // استدعاء الدالة من المؤشر 0 وطباعة النتيجة
        int max = findMax(arr, 0);
        System.out.println(max);

        in.close();
    }

    static int findMax(int[] arr, int index) {
        // Base case: إذا وصلنا لأخر عنصر في المصفوفة، نعيده كنهاية
        if (index == arr.length - 1) {
            return arr[index];                                   // base case
        }

        // Recursive case: نقارن العنصر الحالي بأكبر عنصر في باقي المصفوغة
        int maxOfRest = findMax(arr, index + 1);           // recursive case

        return Math.max(arr[index], maxOfRest);
    }
}