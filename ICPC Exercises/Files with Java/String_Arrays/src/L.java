// I_love_\%username\%

import java.util.Scanner;

public class L {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        short counter = 0;
        int max = 0 , min = 0;
        for(int i = 0 ; i < n ; i++) {
            int x = in.nextInt();
            if(i == 0){
                max = x; min = x;
            }else {
                if(max < x) {
                    counter++;
                    max = x;
                }
                if(min > x) {
                    counter++;
                    min = x;
                }
            }
        }
        System.out.println(counter);
        in.close();

    }
}