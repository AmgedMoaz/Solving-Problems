// Anton and Danik

import java.util.Scanner;

public class K {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String s = in.next();

        int Anton = 0 , Danik = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s.charAt(i) == 'A') {
                Anton++;
            }else {
                Danik++;
            }
        }
        if(Anton > Danik) {
            System.out.println("Anton");
        }else if(Anton < Danik) {
            System.out.println("Danik");
        }else {
            System.out.println("Friendship");
        }
        in.close();

    }
}