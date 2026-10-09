// Number Transformation

import java.util.Scanner;

public class J {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        int x , y;
        while(t-- > 0) {
            x = scanner.nextInt();
            y = scanner.nextInt();

            if(y%x != 0) {
                System.out.println("0 0");
            }else {
                System.out.println("1 " + (y/x));
            }
        }
        scanner.close();
    }
}