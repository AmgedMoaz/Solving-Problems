// Searching

import java.util.Scanner;

public class B {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }

        int x = in.nextInt();
        int index = -1;
        for(int i = 0 ; i < n ; i++) {
            if(arr[i] == x) {
                index = i;
                break;
            }
        }
        System.out.println(index);
        in.close();

    }
}