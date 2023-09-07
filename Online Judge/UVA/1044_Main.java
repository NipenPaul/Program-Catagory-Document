import java.util.Scanner;

public class Main {

	static Scanner input = new Scanner(System.in);

	public static void main(String[] args) {

		int n;

		n = input.nextInt();
		for (int i = 0; i < n; i++) {

			int a, b, row, col, ans;
			a = input.nextInt();
			b = input.nextInt();
			row = a / 3;
			row = row * 3;
			col = b / 3;
			col = col * 3;

			ans = (row * col) / 9;
			System.out.println(ans);

		}

	}

}
