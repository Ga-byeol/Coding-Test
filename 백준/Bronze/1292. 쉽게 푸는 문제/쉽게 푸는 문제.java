import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        int index = 1; // 1, 2, 2, 3, 3, 3...의 인덱스 저장
        int sum = 0; // 합 저장
        
        for(int i = 1; i <= b; i++){ // 1, 2, 3, 4...
            for(int j = 0; j < i; j++){// 위 i를 i만큼 반복
                if(index >= a && index <= b) sum += i; // 인덱스가 a이상 b이하까지 더함
                index++; // 인덱스 증가
            }
        }
        System.out.println(sum);
    }
}