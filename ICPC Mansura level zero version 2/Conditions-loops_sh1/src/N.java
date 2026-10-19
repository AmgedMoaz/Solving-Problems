// Team

import java.util.Scanner;

public class N {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int a , b , c;
        int count = 0;
        for(int i = 0 ; i < n ; i++) {
            a = in.nextInt();
            b = in.nextInt();
            c = in.nextInt();

            if(a == 1 && b == 1) {
                count++;
            }else if(b == 1 && c == 1) {
                count++;
            }else if(a == 1 && c == 1) {
                count++;
            }
        }
        System.out.println(count);
        in.close();;
    }
}