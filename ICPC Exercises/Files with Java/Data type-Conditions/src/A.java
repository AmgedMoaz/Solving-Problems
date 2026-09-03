// Your First Judge

import java.util.Scanner;

public class A {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        String s = input.nextLine();

        String standard_phrase = "Hello,World!";

        if(s.equals(standard_phrase)) {
            System.out.println("AC");
        }else {
            System.out.println("WA");
        }
        input.close();

    }
}