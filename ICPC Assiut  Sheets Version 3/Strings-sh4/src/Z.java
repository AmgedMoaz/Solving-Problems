// Clean Code

import java.util.Scanner;

public class Z {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        boolean isStartMultiComment = false;

        while (in.hasNextLine()) {
            String source = in.nextLine();

            if (source.isEmpty() || source.equals(" ")) {
                continue;
            }

            StringBuilder sb = new StringBuilder();
            boolean isNotComment = false;

            for (int i = 0; i < source.length(); i++) {
                if (i + 1 < source.length() && source.charAt(i) == '/' && source.charAt(i + 1) == '/' && !isStartMultiComment) {
                    break;
                } else if (i + 1 < source.length() && source.charAt(i) == '/' && source.charAt(i + 1) == '*') {
                    i++;
                    isStartMultiComment = true;
                } else if (i + 1 < source.length() && source.charAt(i) == '*' && source.charAt(i + 1) == '/' && isStartMultiComment) {
                    i++;
                    isStartMultiComment = false;
                } else if (!isStartMultiComment) {
                    sb.append(source.charAt(i));
                    isNotComment = true;
                }
            }

            if (isNotComment && !isStartMultiComment) {
                String result = sb.toString();
                if (!result.trim().isEmpty()) {
                    System.out.println(result);
                }
            }
        }
        in.close();

    }
}