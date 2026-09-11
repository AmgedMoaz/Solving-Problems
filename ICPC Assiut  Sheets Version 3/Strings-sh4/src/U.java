// New Words

import java.util.Scanner;

public class U {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.next();
        int e = 0 , g = 0 , y = 0 , p = 0 , t = 0;
        int i = 0;
        while(i < s.length()) {
            if (s.charAt(i) == 'E' || s.charAt(i) == 'e') {
                e++;
            } else if (s.charAt(i) == 'G' || s.charAt(i) == 'g') {
                g++;
            } else if (s.charAt(i) == 'Y' || s.charAt(i) == 'y') {
                y++;
            } else if (s.charAt(i) == 'P' || s.charAt(i) == 'p') {
                p++;
            } else if (s.charAt(i) == 'T' || s.charAt(i) == 't') {
                t++;
            }
            i++;
        }
        int result = Math.min(e,Math.min(g,Math.min(y,Math.min(p,t))));
        System.out.println(result);
        in.close();

    }
}