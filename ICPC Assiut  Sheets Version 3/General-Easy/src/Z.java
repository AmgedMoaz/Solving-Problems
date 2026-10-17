// Decoding

import java.util.Scanner;
import java.util.Deque;
import java.util.ArrayDeque;

public class Z {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String s = in.next();

        Deque<Character> dq = new ArrayDeque<>();

        for(int i = 0 ; i < n ; i++) {
            if(n%2 == 1) {
                if(i%2 == 0) {
                    dq.addLast(s.charAt(i));
                }else {
                    dq.addFirst(s.charAt(i));
                }
            }else {
                if(i%2 == 0) {
                    dq.addFirst(s.charAt(i));
                }else {
                    dq.addLast(s.charAt(i));
                }
            }
        }
        StringBuilder result = new StringBuilder();
        for(var c : dq) {
            result.append(c);
        }
        System.out.println(result);
        in.close();
    }
}