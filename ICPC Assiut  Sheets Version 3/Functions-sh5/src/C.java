// Wonderful Number

import java.util.Scanner;

public class C {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        if(isWonderful(n))
            System.out.println("YES");
        else
            System.out.println("NO");
        in.close();

    }
    static boolean isWonderful(int num) {
        if (num % 2 == 0)
            return false;
        else {
            StringBuilder temp = new StringBuilder();
            int current = num;
            while (current > 0) {
                temp.append(current % 2);
                current /= 2; // تحديث القيمة لتجنب التكرار اللانهائي
            }

            // يمكنك الآن عكس النص أو فحصه حسب متطلبات المسألة
            String binary = temp.toString();
            String reversed = temp.reverse().toString();

            return binary.equals(reversed);
         }
    }
}