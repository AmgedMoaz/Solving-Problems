// Add

import java.util.Scanner;

public class A {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        int n1 = in.nextInt();
        int n2 = in.nextInt();
        System.out.println(add(n1,n2));
        in.close();

    }
    static int add(int...n) {
        int sum = 0;
        for(int x : n) {
            sum += x;
        }
        return sum;
    }
}