// Sum Digits

import java.util.Scanner;

public class K {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String s = in.next();
        int sum = 0;
        for(int i = 0 ; i < n ; i++) {
            sum += (s.charAt(i) - '0');
        }
        System.out.println(sum);
        in.close();

    }
}