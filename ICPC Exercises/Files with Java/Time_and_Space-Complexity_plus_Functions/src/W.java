// Dislike of Threes

import java.util.Scanner;

public class W {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            int n = in.nextInt();
            solve(n);
        }
        in.close();
    }

    static void solve(int n) {
        int currentNumber = 0;
        int count = 0;

        while(count < n) {
            currentNumber++;
            if(currentNumber%3 != 0 && currentNumber%10 != 3) {
                count++;
            }
        }
        System.out.println(currentNumber);
    }
}