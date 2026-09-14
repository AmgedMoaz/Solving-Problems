// I Wanna Be the Guy

import java.util.Scanner;
import java.util.HashSet;

public class G {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        HashSet<Integer> level = new HashSet<>();
        int n = in.nextInt();

        int p = in.nextInt();
        for(int i = 0 ; i < p ; i++) {
            level.add(in.nextInt());
        }

        int q = in.nextInt();
        for(int i = 0 ; i < q ; i++) {
            level.add(in.nextInt());
        }

        if(level.size() == n) {
            System.out.println("I become the guy.");
        }else {
            System.out.println("Oh, my keyboard!");
        }
        in.close();

    }
}