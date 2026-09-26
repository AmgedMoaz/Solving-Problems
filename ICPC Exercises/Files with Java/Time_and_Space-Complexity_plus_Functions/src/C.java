// Divisibility Problem

import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            int a = in.nextInt();
            int b = in.nextInt();
            System.out.println(solve(a,b));
        }
        in.close();
    }
    static int solve(int num1 , int num2) {
        if(num1%num2 == 0)  return 0;
        else {
            int remainder = num2-(num1%num2);
            return remainder;
        }
    }
}