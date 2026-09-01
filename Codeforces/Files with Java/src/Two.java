// Prepend and Append
// Write a code to solve problem by using two pointers technique

import java.util.Scanner;

public class Two {
    static public  void main(String[] args) {

        Scanner input = new Scanner(System.in);

        byte t;
        t = input.nextByte();

        while(t > 0) {
            short n;
            n = input.nextShort();
            short ans = n;

            String s;
            s = input.next();
            int left = 0 , right = n-1;
            while(left <= right) {
                if(s.charAt(left) != s.charAt(right)) {
                    ans -= 2;
                    left++;
                    right--;
                }else {
                    break;
                }
            }
            System.out.println(ans);
            t--;
        }
    }
}