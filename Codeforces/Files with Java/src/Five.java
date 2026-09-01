// 1D Eraser
// Write a code to solve problem by using Greedy Algorithm technique

import java.util.Scanner;

public class Five {
    public static void main(String[] argv) {

        Scanner input = new Scanner(System.in);

        short t;
        t = input.nextShort();

        while(t > 0) {
            int n , k;
            n = input.nextInt();
            k = input.nextInt();

            String s;
            s = input.next();

            int i = 0 , operation = 0;
            while(i < n){
                if(s.charAt(i) == 'B') {
                    operation++;
                    i += k;
                }else {
                    i++;
                }
            }
            System.out.println(operation);
            t--;
        }
    }
}