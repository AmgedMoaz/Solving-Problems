// Pangram

import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class M {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String s = in.next();

        s = s.toLowerCase();
        Set<Character> arr = new HashSet<>();
        for(int i = 0 ; i < n ; i++) {
            arr.add(s.charAt(i));
        }
        if(arr.size() == 26) {
            System.out.println("YES");
        }else {
            System.out.println("NO");
        }
        in.close();
    }
}