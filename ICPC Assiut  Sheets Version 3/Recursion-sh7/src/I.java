// Count Vowels

import java.util.Scanner;

public class I {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        String phrase = in.nextLine();
        int result = countVowels(phrase,0,0);
        System.out.println(result);
        in.close();
    }
    static int countVowels(String s , int counter , int index) {
        if(index == s.length())
            return counter;                           // base case

        char c = s.charAt(index);
        c = Character.toLowerCase(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                counter++;
        }
        return countVowels(s,counter,index+1);   // recursive case
    }
}