class Solution {
    public int solution(int n) {
        int answer = 1;
        
        for(int i = 2; i <= 11; i++){
            if(fac(i) > n) return i-1;
        }
        return 0;
    }
    
    public int fac(int n){
        int result = 1;
        for(int i = 2; i <= n; i++){
            result *= i;
        }
        return result;
    }
}