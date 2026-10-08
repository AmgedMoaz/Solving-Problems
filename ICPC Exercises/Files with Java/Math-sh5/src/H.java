// Plus One on the Subset

import java.util.Scanner;

public class H {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while(t-- > 0) {
            int n = scanner.nextInt();
            long[] arr = new long[n];

            // قراءة العنصر الأول أولاً لتعيين القيمة الابتدائية بشكل صحيح
            arr[0] = scanner.nextLong();
            long max_value = arr[0];
            long min_vaule = arr[0];

            // قراءة باقي العناصر والمقارنة
            for(int i = 1 ; i < n ; i++) {
                arr[i] = scanner.nextLong();
                if(min_vaule > arr[i]) {
                    min_vaule = arr[i];
                }
                if(max_value < arr[i]) {
                    max_value = arr[i];
                }
            }
            System.out.println( (max_value - min_vaule) );
        }
        scanner.close();
    }
}