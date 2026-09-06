// Utopian Tree

import java.util.Scanner;

public class N {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int t;
        t = in.nextShort();

        while(t > 0) {
            int n;
            n = in.nextInt();

            int height = 1;
            for(int i = 1 ; i <= n ; i++) {
                if(i%2 != 0) {
                    height *= 2;
                }else {
                    height += 1;
                }
            }
            System.out.println(height);
            t--;
        }
        in.close();

    }
}