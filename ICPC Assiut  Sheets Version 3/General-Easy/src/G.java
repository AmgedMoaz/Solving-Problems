// Magnets

import java.util.Scanner;

public class G {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String curr , prev;
        int group = 1;
        prev = in.next();
        while(n-- > 1) {
            curr = in.next();
            if(!curr.equals(prev)) {
                group++;
            }
            prev = curr;
        }
        System.out.println(group);
        in.close();
    }
}