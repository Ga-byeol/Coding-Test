import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sugar = 0;
        
        while(true){ // 3kg 설탕의 개수 구하기
            if(n%5 == 0 || n <=0) break;
            n = n-3;
            sugar++;
        }
        
        if(n % 5 == 0) System.out.print(sugar + n / 5); // 5kg 설탕의 개수 구하기
        else System.out.print(-1);
    }
}

/*
5kg의 설탕이 많을 수록 개수가 적음

3kg의 설탕의 최소 개수를 구한 후
5kg의 설탕의 개수를 구하여
더해주면 총 설탕의 개수가 구해짐

5kg의 설탕으로 나눌 수 없으면 -1
*/
