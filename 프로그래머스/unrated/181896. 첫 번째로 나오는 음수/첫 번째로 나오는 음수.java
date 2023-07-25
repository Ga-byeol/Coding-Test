import java.util.Arrays;
import java.util.stream.Collectors;

class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        for(int x : num_list){
            if(x < 0){
                return Arrays.stream(num_list).boxed().collect(Collectors.toList()).indexOf(x);
            }
        }
        return -1;
    }
}