// Reverse Words

import java.util.Scanner;

public class Q {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String s = in.nextLine();

        boolean checkFirst = false;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s.charAt(i) == ' ' || i == s.length()-1) {
                if(checkFirst)
                    System.out.print(" ");
                int index;
                if(i == s.length()-1) {
                    index = i;
                }else {
                    index = i-1;
                }
                while(index >= 0 && s.charAt(index) != ' ') {
                    checkFirst = true;
                    System.out.print(s.charAt(index));
                    index--;
                }
            }
        }
        in.close();

    }
}