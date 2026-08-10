// Comparison

import java.util.Scanner;

public class V {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int a , b;
        char s;
        a = input.nextInt();
        s = input.next() .charAt(0);
        b = input.nextInt();

        if(s == '<') {
            if(b > a) {
                System.out.println("Right");
            }else {
                System.out.println("Wrong");
            }
        }else if(s == '>') {
            if(a > b) {
                System.out.println("Right");
            }else {
                System.out.println("Wrong");
            }
        }else {
            if(a == b) {
               System.out.println("Right");
            }
            else {
                System.out.println("Wrong");
            }
        }

    }
}