// Encrypt & Decrypt Message

import java.util.Scanner;

public class W {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int q = in.nextInt();
        String s = in.next();

        String original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        String key      = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (q == 1) {
                int idx = original.indexOf(ch);
                if (idx != -1) {
                    result.append(key.charAt(idx));
                } else {
                    result.append(ch);
                }
            } else {
                int idx = key.indexOf(ch);
                if (idx != -1) {
                    result.append(original.charAt(idx));
                } else {
                    result.append(ch);
                }
            }
        }
        System.out.println(result.toString());
        in.close();

    }
}