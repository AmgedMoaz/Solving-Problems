// Interval

import java.util.Scanner;

public class S {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        double n;
        n = input.nextDouble();

        if(n > 100 || n < 0) {
            System.out.println("Out of Intervals");
        }else {
            if(n >= 0 && n <= 25) {
                System.out.println("Interval " + "[0,25]");
            }else if(n > 25 && n <= 50) {
                System.out.println("Interval " + "(25,50]");
            }else if(n > 50 && n <= 75) {
                System.out.println("Interval " + "(50,75]");
            }else {
                System.out.println("Interval " + "(75,100]");
            }
        }

    }
}