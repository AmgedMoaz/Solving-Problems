// Counting

import java.util.Scanner;

public class D {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();

        int counter = 0;

        if(a < b) {
            counter = b-a+1;
            System.out.println(counter);
        }else {
            System.out.println(counter);
        }
        in.close();

    }
}