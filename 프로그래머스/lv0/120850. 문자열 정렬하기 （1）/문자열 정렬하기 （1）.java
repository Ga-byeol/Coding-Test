import java.util.*;

class Solution {
    public int[] solution(String my_string) {
        my_string = my_string.replaceAll("[^0-9]","");
        int[] answer = new int[my_string.length()];
        
        char[] chs = my_string.toCharArray();
        
        for(int i = 0; i < answer.length; i++){
            answer[i] = (int)chs[i] - '0';
        }
        
        Arrays.sort(answer);
        
        return answer;
    }
}