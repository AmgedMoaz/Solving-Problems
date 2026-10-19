// Division?

import java.util.Scanner;

public class H {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        int rating;
        while(t-- > 0) {
            rating = in.nextInt();

            if(rating <= 1399) {
                System.out.println("Division 4");
            }else if(rating >= 1400 && rating <= 1599) {
                System.out.println("Division 3");
            }else if(rating >= 1600 && rating <= 1899) {
                System.out.println("Division 2");
            }else {
                System.out.println("Division 1");
            }
        }
        in.close();;
    }
}