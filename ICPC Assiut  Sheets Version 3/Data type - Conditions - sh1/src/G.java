 // Summation from 1 to N

import java.util.Scanner;

public class G {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        long n;
        n = input.nextInt();

        long sum;
        sum = n*(n+1) / 2;

        System.out.println(sum);

    }
}