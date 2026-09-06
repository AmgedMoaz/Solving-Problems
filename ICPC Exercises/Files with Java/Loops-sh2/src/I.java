// Directional Move

import java.util.Scanner;

public class I {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        int n;    String s;

        while(t > 0) {
            n = in.nextInt();
            s = in.next();
            char direction = 'E';
            for(int i = 0 ; i < n ; i++) {
            if(s.charAt(i) == '0') {
                if(direction == 'E') {
                    direction = 'S';
                }else if(direction == 'S') {
                    direction = 'W';
                }else if(direction == 'W') {
                    direction = 'N';
                }else {
                    direction = 'E';
                }
            }else {
                if(direction == 'E') {
                    direction = 'N';
                }else if(direction == 'N') {
                    direction = 'W';
                }else if(direction == 'W') {
                    direction = 'S';
                }else {
                    direction = 'E';
                }
            }
            }
            System.out.println(direction);
            t--;
        }
        in.close();

    }
}