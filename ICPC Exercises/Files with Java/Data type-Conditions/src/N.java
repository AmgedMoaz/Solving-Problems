// Rolling Dice

import java.util.Scanner;

public class N {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();

        if(b >= a && b <= 6*a) {
            System.out.println("Yes");
        }else {
            System.out.println("No");
        }
        in.close();

    }
}