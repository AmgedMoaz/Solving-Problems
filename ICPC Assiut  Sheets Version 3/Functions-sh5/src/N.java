// Shift Zeros

import java.util.Scanner;

public class N {
    public static void main(String [] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int [] arr = new int[n];

        // قراءة عناصر المصفوفة
        for(int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        shiftZeros(arr, n);

        in.close();
    }

    static void shiftZeros(int [] arr, short num) {
        int nonZeroIdx = 0;

        // نقل الأرقام التي لا تساوي الصفر إلى البداية
        for(int i = 0; i < num; i++) {
            if(arr[i] != 0) {
                arr[nonZeroIdx++] = arr[i];
            }
        }

        // ملء باقي أماكن المصفوفة بالأصفار
        while(nonZeroIdx < num) {
            arr[nonZeroIdx++] = 0;
        }

        // طباعة النتيجة
        for(int i = 0; i < num; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}