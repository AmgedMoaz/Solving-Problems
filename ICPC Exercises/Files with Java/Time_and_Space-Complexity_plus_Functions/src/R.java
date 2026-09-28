// Long Sequence

import java.util.Scanner;

public class R {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        long[] arr = new long[n]; // استخدمنا long عشان مجموع العناصر ممكن يكون كبير
        long totalSum = 0;

        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextLong();
            totalSum += arr[i];
        }

        long x = in.nextLong();
        System.out.println(solve(arr, x, totalSum));
        in.close();
    }

    static long solve(long[] arr, long x, long totalSum) {
        int n = arr.length;

        // 1. حساب عدد الدورات الكاملة اللي X يقدر يستحملها
        long fullCycles = x / totalSum;
        long currentSum = fullCycles * totalSum; // المجموع اللي وصلناله من الدورات الكاملة
        long ans = fullCycles * n;               // عدد العناصر اللي عديناها في الدورات الكاملة

        // 2. تتبع الباقي عنصر بعنصر
        int i = 0;
        while (currentSum <= x) {
            currentSum += arr[i];
            ans++;
            i = (i + 1) % n; // عشان نلف جوه المصفوفة بشكل دائري
        }

        return ans;
    }
}