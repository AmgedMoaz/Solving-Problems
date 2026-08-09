 // The Brothers

import java.util.Scanner;

public class L {
        static Scanner input = new Scanner(System.in);
        public static void main(String[] args) {

            String f1 , f2 ,s1 ,s2;
            f1 = input.next();
            s1 = input.next();
            f2 = input.next();
            s2 = input.next();

            if(s1.equals(s2)) {
                System.out.println("ARE Brothers");
            }else {
                System.out.println("NOT");
            }

        }
}