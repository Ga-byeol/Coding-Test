class Solution {
    public int[] solution(int denum1, int num1, int denum2, int num2) {
        int[] answer = {0,0};

        answer[1] = num1 * num2 / GCD(num1,num2);
        
        answer[0] = denum1 * (answer[1]/num1) + denum2 * (answer[1]/num2);
        int gcd = GCD(answer[0], answer[1]);
        answer[0] /= gcd;
        answer[1] /= gcd;
        
        return answer;
    }
    
    public int GCD(int a, int b){
        if(a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if(a % b == 0) return b;
        
        return GCD(b, a % b);
    }
}