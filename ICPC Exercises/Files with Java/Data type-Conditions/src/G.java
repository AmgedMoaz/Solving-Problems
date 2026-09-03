// Grouping

import java.util.Scanner;

public class G {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int[] group = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};

        int x = in.nextInt();
        int y = in.nextInt();

        if(group[x] == group[y]) {
            System.out.println("Yes");
        }else {
            System.out.println("No");
        }
        in.close();

    }
}