// Create A New String

import java.util.Scanner;

public class A {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        String s = in.next();
        String t = in.next();

        int n1 = s.length();
        int n2 = t.length();

        System.out.println(n1 + " " + n2);
        System.out.println(s + " " + t);
        in.close();

    }
}