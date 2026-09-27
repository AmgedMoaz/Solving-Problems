// 753

import java.util.Scanner;

public class M {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short x = in.nextShort();
        if(solve(x))
            System.out.println("YES");
        else
            System.out.println("NO");
        in.close();
    }
    static boolean solve(short number) {
        boolean flag = false;
        if(number == 3 || number == 5 || number == 7){
            flag = true;
        }
        return flag;
    }
}