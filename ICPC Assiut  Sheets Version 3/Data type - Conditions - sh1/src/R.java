// Age in Days

import java.util.Scanner;

public class R {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int n;
        n = input.nextInt();

        int years;
        years = n / 365;
        System.out.println(years + " years");
        n %= 365;

        int months;
        months = n / 30;
        System.out.println(months + " months");
        n %= 30;

        System.out.println(n +" days");

    }
}