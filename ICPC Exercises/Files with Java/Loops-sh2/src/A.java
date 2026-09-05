// Find Multiple

import java.util.Scanner;

public class A {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int a , b , c;
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();

        boolean isMultiple = false;
        int i = a;
        while(i <= b) {
            if(i%c == 0) {
                isMultiple = true;
                break;
            }
            i++;
        }
        if(isMultiple) {
            System.out.println(i);
        }else {
            System.out.println(-1);
        }

        in.close();
    }
}