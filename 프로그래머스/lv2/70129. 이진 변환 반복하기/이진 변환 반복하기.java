import java.util.Collections;

class Solution {
    public int[] solution(String s) {
        int[] answer = {0,0};
        
        while(true)
        {
            int len = s.length();
            if(len == 1) break;
            int zero = s.replace(String.valueOf("1"), "").length();
            int cnt = len - zero;
            answer[1] += zero;
            answer[0]++;
            s = Integer.toBinaryString(cnt);
        }
        return answer;
    }
}