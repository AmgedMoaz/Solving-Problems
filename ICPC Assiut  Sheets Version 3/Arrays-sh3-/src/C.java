// Replacement

import java.util.Scanner;

public class C {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int [] arr = new int [n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
            if(arr[i] > 0) {
                arr[i] = 1;
            }else if(arr[i] < 0) {
                arr[i] = 2;
            }
        }

        for(int i = 0 ; i < n ; i++)
            System.out.print(arr[i] + " ");
        in.close();

    }
}