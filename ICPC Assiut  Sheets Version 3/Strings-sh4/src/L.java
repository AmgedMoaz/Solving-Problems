// String Functions

import java.util.Arrays;
import java.util.Scanner;

public class L {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int q = in.nextInt();

        // استخدام StringBuilder لسريعة التعديل والإضافة والحذف
        StringBuilder s = new StringBuilder(in.next());

        while (q-- > 0) {
            String query = in.next();

            switch (query) {
                case "pop_back":
                    s.deleteCharAt(s.length() - 1);
                    break;

                case "front":
                    System.out.println(s.charAt(0));
                    break;

                case "back":
                    System.out.println(s.charAt(s.length() - 1));
                    break;

                case "sort": {
                    int l = in.nextInt() - 1;
                    int r = in.nextInt() - 1;
                    int start = Math.min(l, r);
                    int end = Math.max(l, r);

                    // استخراج المدى وتحويله لمصفوفة لترتيبها
                    char[] sub = s.substring(start, end + 1).toCharArray();
                    Arrays.sort(sub);

                    // استبدال الجزء القديم بالجزء المُرتب
                    s.replace(start, end + 1, new String(sub));
                    break;
                }

                case "reverse": {
                    int l = in.nextInt() - 1;
                    int r = in.nextInt() - 1;
                    int start = Math.min(l, r);
                    int end = Math.max(l, r);

                    // استخراج المدى وعكسه بـ StringBuilder
                    StringBuilder sub = new StringBuilder(s.substring(start, end + 1));
                    sub.reverse();

                    // استبدال الجزء القديم بالجزء المعكوس
                    s.replace(start, end + 1, sub.toString());
                    break;
                }

                case "print": {
                    int pos = in.nextInt() - 1;
                    System.out.println(s.charAt(pos));
                    break;
                }

                case "substr": {
                    int l = in.nextInt() - 1;
                    int r = in.nextInt() - 1;
                    int start = Math.min(l, r);
                    int end = Math.max(l, r);

                    System.out.println(s.substring(start, end + 1));
                    break;
                }

                case "push_back": {
                    char x = in.next().charAt(0);
                    s.append(x);
                    break;
                }
            }
        }
        in.close();

    }
}