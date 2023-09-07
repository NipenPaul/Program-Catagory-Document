import java.util.Scanner;

public class Main {

	static Scanner input = new Scanner(System.in);

	public static void main(String[] args) {
		int i, n;
		long fibo[] = new long[100000];

		while (input.hasNext()) {

			n = input.nextInt();
			if (n == 0) {
				break;
			}

			fibo[1] = 1;
			fibo[2] = 2;

			for (i = 3; i <= n; i++) {
				fibo[i] = fibo[i - 2] + fibo[i - 1];
			}
			System.out.println(fibo[n]);
		}

	}

}
