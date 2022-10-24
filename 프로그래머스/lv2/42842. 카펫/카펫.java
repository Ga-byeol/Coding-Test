class Solution {
    public int[] solution(int brown, int yellow) {
        int[] answer = {0,0};
        int sum = (brown + 4)/2;
        
        while(true){
            answer[1]++;
            answer[0] = sum - answer[1];
            if(answer[0]*answer[1] == brown+yellow){
                break;
            }
        }
        return answer;
    }
}