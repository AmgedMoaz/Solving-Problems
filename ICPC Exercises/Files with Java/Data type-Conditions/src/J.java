// Signed Difficulty

import java.util.Scanner;

public class J {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        String num = in.next();

        // تقسيم النص عند النقطة (.)
        String[] parts = num.split("\\.");

        int x = Integer.parseInt(parts[0]);
        int y = Integer.parseInt(parts[1]);

        if(y >= 0 && y <= 2) {
            System.out.println(x+"-");
        }else if(y >= 3 && y <= 6) {
            System.out.println(x);
        }else {
            System.out.println(x+"+");
        }
        in.close();

    }
}