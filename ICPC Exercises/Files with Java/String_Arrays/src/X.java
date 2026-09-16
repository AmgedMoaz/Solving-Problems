// Anton and Letters

import java.util.Scanner;
import java.util.HashSet;

public class X {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String phrase = in.nextLine();
        HashSet<Character> arr = new HashSet();

        int counter = 0;
        for(int i = 0 ; i < phrase.length() ; i++) {
            if(Character.isAlphabetic(phrase.charAt(i))) {
                arr.add(phrase.charAt(i));
            }
        }
        counter = arr.size();
        System.out.println(counter);

        in.close();

    }
}