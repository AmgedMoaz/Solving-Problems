// Lucky Array

import java.util.Scanner;
import java.util.Arrays;

public class J {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }

        Arrays.sort(arr);
        int counter = 1;
        int minItem = arr[0];
        for(int i = 1 ; i < n ; i++) {
            if(minItem == arr[i]) {
                counter++;
            }
            else {
                break;
            }
        }
        if(counter%2 == 0) {
            System.out.println("Unlucky");
        }else {
            System.out.println("Lucky");
        }
        in.close();

    }
}