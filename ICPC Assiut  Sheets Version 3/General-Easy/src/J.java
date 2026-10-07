// Lucky Division

import java.util.Scanner;

public class J {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int []arr = {4,7,44,47,74,77,444,447,474,477,744,774,747,777};
        for(int i = 0 ; i < 14 ; i++) {
            if(n % arr[i] == 0) {
                System.out.println("YES");
                return;
            }
        }
        System.out.println("NO");
        in.close();
    }
}