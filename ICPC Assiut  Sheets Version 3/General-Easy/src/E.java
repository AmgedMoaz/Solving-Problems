// George and Accommodation

import java.util.Scanner;

public class E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int freeRooms = 0;
        while(n-- > 0) {
            int p = in.nextInt();
            int q = in.nextInt();
            if(q-p >= 2) {
                freeRooms++;
            }
        }
        System.out.println(freeRooms);
        in.close();
    }
}