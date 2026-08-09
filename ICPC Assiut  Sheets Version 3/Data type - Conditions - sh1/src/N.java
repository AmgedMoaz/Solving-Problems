// Char

import java.util.Scanner;

public class N {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

    char x;
    x = input.next() .charAt(0);

    // الطريقة الاولي
        /*
    if(x >= 'a' && x <= 'z') {
        System.out.println((char)(x - 32));
    }else {
        System.out.println((char)(x + 32));
    }
         */
    // الطريقة الثانية
    if(Character.isLowerCase(x)) {
        System.out.println(Character.toUpperCase(x));
    }else {
        System.out.println(Character.toLowerCase(x));
    }

    }
}