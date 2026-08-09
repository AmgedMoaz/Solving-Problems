// Calculator

import java.util.Scanner;

public class O {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        String expression = input.nextLine();

        int index;

        if (expression.contains("+"))
            index = expression.indexOf("+");
        else if (expression.contains("-"))
            index = expression.indexOf("-");
        else if (expression.contains("*"))
            index = expression.indexOf("*");
        else
            index = expression.indexOf("/");

        char op = expression.charAt(index);

        int A = Integer.parseInt(expression.substring(0, index));
        int B = Integer.parseInt(expression.substring(index + 1));

        if (op == '+')
            System.out.println(A + B);
        else if (op == '-')
            System.out.println(A - B);
        else if (op == '*')
            System.out.println(A * B);
        else
            System.out.println(A / B);
    }
}