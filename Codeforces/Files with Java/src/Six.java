// Black and White Stripe
// Write a code to solve a problem by using sliding window technique

import java.util.Scanner;

public class Six {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        short t;
        t = input.nextShort();


        while(t > 0) {
            int n , k;
            n = input.nextInt();
            k = input.nextInt();

            String s;
            s = input.next();

            int current_window = 0;
            for(int i = 0 ; i < k ; i++) {
                if (s.charAt(i) == 'W') {
                    current_window++;
                }
            }
                int min_operation = current_window;
                for(int i = k ; i < n ; i++) {

                    // إذا كان العنصر الذي سيخرج من النافذة من جهة اليسار هو 'W'
                    if(s.charAt(i-k) == 'W')
                        current_window--;

                    // إذا كان العنصر الجديد الذي سيدخل النافذة من جهة اليمين هو 'W'
                    if(s.charAt(i) == 'W')
                        current_window++;
                    min_operation = Math.min(min_operation,current_window);
                }
            System.out.println(min_operation);
            t--;
        }
    }
}