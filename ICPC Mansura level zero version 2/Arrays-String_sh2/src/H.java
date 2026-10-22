// Count

import java.util.Scanner;

public class H {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int q = in.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++) {
            arr[i] = in.nextInt();
        }

        int l , r , x;
        while(q-- > 0) {
            l = in.nextInt();
            r = in.nextInt();
            x = in.nextInt();

            int counter = 0;
            for(int i = l-1 ; i < r ; i++) {
                if(arr[i] == x) {
                    counter++;
                }
            }
            System.out.println(counter);
        }
        in.close();
    }
}