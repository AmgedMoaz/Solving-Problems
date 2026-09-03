// Blood Pressure

import java.util.Scanner;

public class C {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();

        float c = (float) (a-b)/3;
        c += b;

        System.out.printf("%f%n",c);
        in.close();

    }
}