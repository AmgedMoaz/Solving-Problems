// Anton and Danik

import java.util.Scanner;

public class G {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String phrase = in.next();
        solve(phrase);
        in.close();
    }
    static void solve(String s) {
        int a = 0 , d = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s.charAt(i) == 'A')  a++;
            else if(s.charAt(i) == 'D')   d++;
        }
        if(a > d) System.out.println("Anton");
        else if(a < d) System.out.println("Danik");
        else System.out.println("Friendship");
    }
}