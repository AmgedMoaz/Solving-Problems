// New Generation ABC

import java.util.Scanner;

public class F {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        if(n >= 1 && n <= 125) {
            System.out.println(4);
        }else if(n >= 126 && n <= 211) {
            System.out.println(6);
        }else if(n >= 212 && n <= 214) {
            System.out.println(8);
        }
        in.close();
    }
}