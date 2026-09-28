// ABC Swap

import java.util.Scanner;

public class N {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short x = in.nextShort();
        short y = in.nextShort();
        short z = in.nextShort();
        solve(x,y,z);
        in.close();
    }
    static void solve(short x , short y , short z) {
        short temp1= x;
        x = y;
        y = temp1;

        short temp2 = x;
        x = z;
        z = temp2;

        System.out.println(x + " " + y + " " + z);
    }
}