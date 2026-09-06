// Young Physicist

import java.util.Scanner;

public class F {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();

        int x = 0 , y = 0 , z = 0;
        for(int i = 0 ; i < n ; i++) {
            int c;
            for(int j = 1 ; j <= 3 ; j++) {
                c = in.nextInt();
                if(j == 1) {
                    x += c;
                } else if(j == 2) {
                    y += c;
                }else {
                    z += c;
                }
            }
        }
        if(x==0 && y==0 && z==0 ) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();

    }
}