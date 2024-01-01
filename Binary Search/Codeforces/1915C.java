import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tc;
        tc = scanner.nextInt();
        while(tc > 0){
            int n;
            n = scanner.nextInt();
            int [] arr = new int[n];
            Long sum = 0l;
            for(int i = 0; i < n; i++){
                arr[i] = scanner.nextInt();
                sum += arr[i];
            }
            if(bin(sum) == true){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
            tc--;
        }
    }
    public static boolean bin(Long n){
        Long low = 1l, high = Math.round(1e8);
        while(low <= high){
            Long mid = (low + high) / 2;
            if(mid * mid == n){
                return true;
            }else if(mid * mid > n){
                high = mid - 1;
            }else{
                low = mid+1;
            }
        }
        return false;
    }
}
