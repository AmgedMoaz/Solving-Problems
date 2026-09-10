// Smallest Pair

import java.util.Scanner;

public class I {
    public static void main(String []argv)  {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t > 0) {
            int n = in.nextInt();
            int[] arr = new int[n];
            for(int i = 0 ; i < n ; i++) {
                arr[i] = in.nextInt();
            }
            int minItem = arr[0]+arr[1]+2-1;
            for(int i = 0 ; i < n ; i++) {
                for(int j = i+1 ; j < n ; j++) {
                    if(minItem > (arr[i]+arr[j]+j-i)) {
                        minItem = (arr[i]+arr[j]+j-i);
                    }
                }
            }
            System.out.println(minItem);
            t--;
        }
        in.close();

    }
}