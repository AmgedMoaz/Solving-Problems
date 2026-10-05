// Watermelon

import java.util.Scanner;

public class B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        if(n <= 2) {
            System.out.println("NO");
            return;
        }
        if(n%2 == 0) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();
    }
}