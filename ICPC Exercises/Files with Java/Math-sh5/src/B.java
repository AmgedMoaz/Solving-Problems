// Difference Operations

import java.util.Scanner;

public class B {
    public static void main(String []argv) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        int n = 0;
        int []arr = new int[101];
        while(t-- > 0) {
            boolean flag = true;
            n = in.nextInt();
            for(int i = 0 ; i < n ; i++) {
                arr[i] = in.nextInt();
            }
            for(int i = 1 ; i < n ; i++) {
                if(arr[i] % arr[0] != 0) {
                    flag = false;
                }
            }
            if(flag) {
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }
        }
        in.close();
    }
}