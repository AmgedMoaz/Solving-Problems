// First digit !

import java.util.Scanner;

public class P {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

       int n;
       n = input.nextInt();

       n /= 1000;

       if(n % 2 == 0) {
           System.out.println("EVEN");
       }else {
           System.out.println("ODD");
       }

    }
}