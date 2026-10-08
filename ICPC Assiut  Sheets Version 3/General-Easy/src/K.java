// Prime Fibonacci

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class K {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 1. حساب أعداد فيبوناتشي ومعرفة إذا كانت أولية أم لا مسبقاً (من 1 إلى 50 فقط)
        String[] res = new String[51];
        long[] fib = new long[51];
        fib[1] = 0;
        fib[2] = 1;

        for (int i = 1; i <= 50; i++) {
            if (i > 2) fib[i] = fib[i - 1] + fib[i - 2];

            // فحص هل الرقم أولي بطريقة بسيطة جداً
            long n = fib[i];
            boolean isPrime = n >= 2;
            for (long j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            res[i] = isPrime ? "prime" : "not prime";
        }

        // 2. قراءة عدد الاختبارات
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder(); // لتجميع النتائج وطباعتها دفعة واحدة بسرعة رهيبة

        while (t-- > 0) {
            int x = Integer.parseInt(br.readLine().trim());
            sb.append(res[x]).append("\n");
        }

        System.out.print(sb);
    }
}