// Anton and Danik

import java.util.Scanner;

public class U {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        String row = in.next();
        char[] arr = row.toCharArray();
        int a = 0 , d = 0;
        for(int i = 0 ; i < n ; i++) {
            if(arr[i] == 'A') {
                a++;
            }else {
                d++;
            }
        }
        if(a > d)
            System.out.println("Anton");
        else if(a < d)
            System.out.println("Danik");
        else
            System.out.println("Friendship");

        in.close();

    }
}