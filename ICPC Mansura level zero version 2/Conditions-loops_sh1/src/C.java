// Area of a Circle

import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        double r = in.nextDouble();
        double area = 3.14159 * r * r;
        BigDecimal result = new BigDecimal(area).setScale(4, RoundingMode.HALF_EVEN);
        System.out.println("A=" + result.toPlainString());
    }
}