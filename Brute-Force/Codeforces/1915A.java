import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        n = scanner.nextInt();
        while(n > 0){
            int a, b, c;
            a = scanner.nextInt();
            b = scanner.nextInt();
            c = scanner.nextInt();
            if(a == b){
                System.out.println(c);
            }else if(a == c){
                System.out.println(b);
            }else if(b == c){
                System.out.println(a);
            }
            n--;
        }
    }
}
