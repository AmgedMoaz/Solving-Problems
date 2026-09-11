// Max Split

import java.util.Scanner;
import java.util.ArrayList;

public class S {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.next();
        int counter = 0;
        int L = 0, R = 0;
        ArrayList<String> arr = new ArrayList<>();
        StringBuilder curr = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            curr.append(c);

            if (c == 'L') {
                L++;
            } else {
                R++;
            }

            if (L == R) {
                arr.add(curr.toString());
                counter++;
                L = 0;
                R = 0;
                curr = new StringBuilder();
            }
        }

        System.out.println(counter);
        for (String str : arr) {
            System.out.println(str);
        }
        in.close();

    }
}