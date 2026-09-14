// Vanya and Fence

import java.util.Scanner;

public class A {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        short h = in.nextShort();

        int[] arr = new int[n];
        int counter = 0;
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
            if(arr[i] <= h) {
                counter++;
            }else {
                counter += 2;
            }
        }
        System.out.println(counter);
        in.close();

    }
}