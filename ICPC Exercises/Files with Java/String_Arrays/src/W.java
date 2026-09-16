// Word Capitalization

import java.util.Scanner;

public class W {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String word = in.next();
        String result = Character.toUpperCase(word.charAt(0)) + word.substring(1);
        System.out.println(result);

        in.close();

    }
}