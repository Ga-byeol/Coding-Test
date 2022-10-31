import java.util.*;

public class Main {
    public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      
      for(int i = 1; i <= n; i++) { // 별 찍기
          print(n-i, i); //별 한줄 출력
          System.out.println(); // 한줄 끝나면 줄바꿈
      }
    }
    
    public static void print(int a, int b){
        spacePrn(a); // 첫 별 전 공백출력
        
        System.out.print("*"); // 첫번째 별
        
        for(int i = b - 2; i < b; i++) spacePrn(i); // 별과 별 사이 공백 출력 0, 1, 3, 5, ... 
                                                    // n번째 줄일 때 공백 n-1 + n-2 번 출력
        
        if(b!=1) System.out.print("*"); // 첫줄 아니면 별 출력
    }
    
    public static void spacePrn(int space){ // 받은 값만큼 공백 출력
        for(int i = 0; i < space; i++) System.out.print(" ");
    }
}