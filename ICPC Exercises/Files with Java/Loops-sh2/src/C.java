// Bear and Big Brother

import java.util.Scanner;

public class C {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int limak = in.nextInt();
        int bob = in.nextInt();
        int count_year = 0;
        while(true) {
            limak *= 3;
            bob *= 2;
            count_year++;
            if(limak > bob) {
                System.out.println(count_year);
                break;
            }
        }
        in.close();

    }
}