// Count Words

import java.util.Scanner;

public class P {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.nextLine();

        int counter = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            if(Character.isAlphabetic(s.charAt(i)) &&
              (i == 0 || !Character.isAlphabetic(s.charAt(i-1)))) {
                counter++;
            }
        }
        System.out.println(counter);
        in.close();

    }
}