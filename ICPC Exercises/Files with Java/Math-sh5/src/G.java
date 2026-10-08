// GCD LCM

import java.util.Scanner;

public class G {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while(t-- > 0) {
            int g = scanner.nextInt();
            int l = scanner.nextInt();

            if(l % g != 0) {
                System.out.println(-1);
            }else {
                System.out.println(g + " " + l);
            }
        }
        scanner.close();
    }
}