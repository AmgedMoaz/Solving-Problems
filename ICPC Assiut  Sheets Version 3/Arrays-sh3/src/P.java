// Minimize Number

import java.util.Scanner;

public class P {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }
        int counter = 0;
        boolean check = true;
        while(check) {
            for(int i = 0 ; i < n ; i++) {
                if(arr[i]%2 != 0) {
                    check = false;
                    break;
                }
                arr[i] = arr[i]/2;
            }
            if(check) {
                counter++;
            }
        }
        System.out.println(counter);
        in.close();

    }
}