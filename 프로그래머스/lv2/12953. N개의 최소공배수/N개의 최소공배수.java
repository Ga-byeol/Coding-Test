import java.util.Arrays;

class Solution {
    public int solution(int[] arr) {
        Arrays.sort(arr);
        int answer = arr[arr.length-1];
        
        for(int i = arr.length-2; i >= 0; i--){
            answer = answer*arr[i] / GCD(answer,arr[i]);
        }

        return answer;
    }
    
    public int GCD(int a, int b){
        if(b == 0) return a;
        else return GCD(b, a % b);
    }
}