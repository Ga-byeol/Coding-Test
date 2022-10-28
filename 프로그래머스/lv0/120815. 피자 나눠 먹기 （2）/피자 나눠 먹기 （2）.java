class Solution {
    public int solution(int n) {
        
        int answer = (n * 6) / (n > 6 ? GCD(n, 6) : GCD(6, n)) / 6;
        
        return answer;
    }
    
    public int GCD(int a, int b){
        if(b == 0) return a;
        else return GCD(b, a % b);
    }
}