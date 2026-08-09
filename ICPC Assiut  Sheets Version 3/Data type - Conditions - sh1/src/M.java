// Capital or Small or Digit

import java.util.Scanner;

public class M {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        char x;
        x = input.next().charAt(0);
        if(x >= '0' && x <= '9') {
            System.out.println("IS DIGIT");
        }else {
            System.out.println("ALPHA");
          if(x >= 'a' && x <= 'z') {
              System.out.println("IS SMALL");
          }else if(x >= 'A' && x <= 'Z') {
              System.out.println("IS CAPITAL");
          }
        }

    }
}