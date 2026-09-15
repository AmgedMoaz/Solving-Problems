// Night at the Museum

import java.util.Scanner;

public class T {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String word = in.next();
        char first = 'a';
        int sum = 0;
        for(int i = 0 ; i < word.length() ; i++) {
            int difference = Math.abs(first - word.charAt(i));
            sum += Math.min(difference, 26 - difference);
            first = word.charAt(i);
        }
        System.out.println(sum);
        in.close();

    }
}