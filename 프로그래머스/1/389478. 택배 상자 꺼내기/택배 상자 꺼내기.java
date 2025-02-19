class Solution {
    public int solution(int n, int w, int num) {
        int answer = 0;
        while(num <= n){
            num += 2 * ( (num % w == 0) ? 0 : (w - num % w) ) + 1;
            answer++;
        }
        return answer;
    }
}