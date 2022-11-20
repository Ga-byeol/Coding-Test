import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sugar = 0;
        
        while(true){
            if(n%5 == 0 || n <=0) break;
            n = n-3;
            sugar++;
        }
        
        if(n % 5 == 0) System.out.print(sugar + n / 5);
        else System.out.print(-1);
    }
}