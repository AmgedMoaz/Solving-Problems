// Arrival of the General

import java.util.Scanner;

public class R {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] arr = new int[n];
        int minValue = 0 , maxValue = 0;
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
            if(i == 0)
            {
                minValue = arr[i];
                maxValue = arr[i];
                continue;
            }
            if(minValue > arr[i]) {
                minValue = arr[i];
            }
            if(maxValue < arr[i]) {
                maxValue = arr[i];
            }
        }

        int minIndex = 0 , maxIndex = 0;
        for(int i = 0 ; i < n ; i++) {
            if(maxValue == arr[i]) {
                maxIndex = i;
                break;
            }
        }

        for(int i = 0 ; i < n ; i++) {
            if(minValue == arr[i]) {
                minIndex = i;
            }
        }

        // حساب عدد الخطوات الصحيح
        int totalSteps = maxIndex + (n - 1 - minIndex);

        // إذا كان الأطول يأتي بعد الأقصر، نطرح واحد بسبب التقاطع
        if(maxIndex > minIndex) {
            totalSteps--;
        }

        System.out.println(totalSteps);

        in.close();
    }
}