// Coordinates of a Point

import java.util.Scanner;

public class Q {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        double n , m;
        n = input.nextDouble();
        m = input.nextDouble();

        if(n == 0 && m == 0 ) {
            System.out.println("Origem");
        }else if(n == 0) {
            System.out.println("Eixo Y");
        }else if(m == 0) {
            System.out.println("Eixo X");
        }else if(n > 0 && m > 0) {
            System.out.println("Q1");
        }else if(n > 0 && m < 0) {
            System.out.println("Q4");
        }else if(n < 0 && m > 0) {
            System.out.println("Q2");
        }else if(n < 0 && m < 0) {
            System.out.println("Q3");
        }

    }
}