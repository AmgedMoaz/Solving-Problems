// Palindrome

import java.util.Scanner;

public class I {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int reverse = 0 , temp = n;
        while(temp > 0) {
            reverse = reverse * 10 + (temp%10);
            temp /= 10;
        }

        if(reverse == n) {
            System.out.println(reverse);
            System.out.println("YES");
        }else {
            System.out.println(reverse);
            System.out.println("NO");
        }
        in.close();

    }
}