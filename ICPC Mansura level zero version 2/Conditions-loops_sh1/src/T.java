// Buy a Shovel

import java.util.Scanner;

public class T {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int k = in.nextInt();
        int r = in.nextInt();

        int counter = 1;
        while(true) {
            int totPrice = k * counter;
            if(totPrice%10 == 0 || totPrice%10 == r) {
                break;
            }
            counter++;
        }
        System.out.println(counter);
        in.close();
    }
}