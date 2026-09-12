// Swap

import java.util.Scanner;

public class E {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        int x = in.nextInt();
        int y = in.nextInt();
        swap(x,y);
        in.close();

    }
    static void swap(int n1 , int n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
        System.out.println(n1 + " " + n2);
    }
}