// Check Code

import java.util.Scanner;

public class N {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();
        String s = in.next();
       if(s.charAt(a) != '-') {
           System.out.println("No");
           return;
       }
       for(int i = 0 ; i < s.length() ; i++) {
           if(i == a) continue;
           if(!Character.isDigit(s.charAt(i))) {
               System.out.println("No");
               return;
           }
       }
        System.out.println("Yes");
        in.close();

    }
}