// Fox And Snake

import java.util.Scanner;

public class F {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        boolean flag = true;
        for(int i = 0 ; i < n ; i++) {
            int counter = m;
            if(i%2 == 0) {
                while(counter-- > 0) {
                    System.out.print("#");
                }
                System.out.println();
            }else if(flag) {
                while(counter-- > 1) {
                    System.out.print(".");
                }
                System.out.println("#");
                flag = !flag;
            }else {
                System.out.print("#");
                while(counter-- > 1) {
                    System.out.print(".");
                }
                System.out.println();
                flag = !flag;
            }
        }
        in.close();
    }
}