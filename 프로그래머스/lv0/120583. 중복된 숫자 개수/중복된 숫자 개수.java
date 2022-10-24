import java.util.*;
import java.util.stream.Collectors;

class Solution {
    public int solution(int[] array, int n) {
        int answer = Collections.frequency(Arrays.stream(array).boxed().collect(Collectors.toList()),n);
        return answer;
    }
}