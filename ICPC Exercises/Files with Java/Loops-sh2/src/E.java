// Team

import java.util.Scanner;

public class E {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int counter = 0 , index = 0;
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= 3 ; j++) {
                int x = in.nextInt();
                if(x == 1) {
                    index++;
                }
            }
            if(index >= 2) {
                counter++;
            }
            index = 0;
        }
        System.out.println(counter);
        in.close();

    }
}