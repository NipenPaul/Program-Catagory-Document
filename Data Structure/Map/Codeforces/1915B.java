import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n;
        n = scanner.nextInt();
        while(n > 0){
            String [] str = new String[3];
            for(int i = 0; i < 3; i++){
                str[i] = scanner.next();
            }
            Map<Character, Integer> cnt = new HashMap<>();
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cnt.put(str[i].charAt(j), cnt.getOrDefault(str[i].charAt(j), 0) + 1);
                }
            }
            cnt.forEach((key, value) -> {if(value == 2) System.out.println(key);});
            n--;
        }
    }
}
