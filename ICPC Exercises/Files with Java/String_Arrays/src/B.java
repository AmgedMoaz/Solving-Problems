// In Search of an Easy Problem

import java.util.Scanner;

public class B {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int arr[] = new int[n];

        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
            if(arr[i] == 1) {
                System.out.println("HARD");
                return;
            }
        }
        System.out.println("EASY");
        in.close();

    }
}