// Lucky Numbers

import java.util.Scanner;

public class M {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();
        int counter = 0;
        for(int i = a ; i <= b ; i++) {
            int temp = i;
            boolean check = true;
            while(temp > 0) {
                if(temp%10 == 4 || temp%10 == 7) {
                    check = true;
                }else {
                    check = false;
                    break;
                }
                temp /= 10;
            }
            if(check) {
                System.out.print(i + " ");
                counter++;
            }
        }
        if(counter == 0) {
            System.out.println(-1);
        }
        in.close();

    }
}