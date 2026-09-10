// Lowest Number

import java.util.Scanner;

public class E {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int []arr = new int[n];

        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }
        int minItem = arr[0] , index = 1;
        for(int i = 0 ; i < n ; i++) {
            if(minItem > arr[i]) {
                minItem = arr[i];
                index = i + 1;
            }
        }
        System.out.println(minItem + " " + index);
        in.close();

    }
}