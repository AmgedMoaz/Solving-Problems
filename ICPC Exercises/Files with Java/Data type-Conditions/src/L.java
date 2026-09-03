// Cabbages

import java.util.Scanner;

public class L {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int a = in.nextInt();
        int x = in.nextInt();
        int y = in.nextInt();

        if(n <= a) {
            System.out.println(n*x);
        }else {
            System.out.println(((a*x)+(n-a)*y));
        }
        in.close();

    }
}