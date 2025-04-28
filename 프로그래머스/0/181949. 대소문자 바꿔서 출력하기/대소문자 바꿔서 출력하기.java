import java.util.Scanner;


public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        
        for(char c : a.toCharArray()){
            if(c >= 'Z') c -= 32;
            else c += 32;
            System.out.print(c);
        }
    }
}