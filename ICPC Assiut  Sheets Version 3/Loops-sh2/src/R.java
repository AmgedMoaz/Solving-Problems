// Sequence of Numbers and Sum

import java.util.Scanner;

public class R {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        while(true) {
            int m = in.nextInt();
            int n = in.nextInt();
            int Min = Math.min(m,n);
            int Max = Math.max(m,n);

            if(m > 0 && n > 0) {
                int sum = 0;
                for(int i = Min ; i <= Max ; i++) {
                    System.out.print(i + " ")
                    ;sum += i;
                }
                System.out.println("sum =" + sum);
            }else {
                break;
            }
        }
        in.close();

    }
}