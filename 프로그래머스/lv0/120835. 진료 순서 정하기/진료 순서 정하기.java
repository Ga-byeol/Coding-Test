import java.util.*;
import java.util.stream.Collectors;

class Solution {
    public int[] solution(int[] emergency) {
        
        int[] answer = new int[emergency.length];
        int cnt = 1;
        
        List<Integer> list = Arrays.stream(emergency).boxed().collect(Collectors.toList());
        
        Arrays.sort(emergency);

        for(int i = answer.length-1; i >= 0; i--){
            answer[list.indexOf(emergency[i])] = cnt++;
        }
        
        return answer;
    }
}