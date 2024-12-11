import java.util.Arrays;
import java.util.stream.IntStream;

class Solution {
    public String[] solution(String[] todo_list, boolean[] finished) {
        String[] answer = {};
        
        return IntStream.range(0, todo_list.length)
                               .filter(idx -> finished[idx] != true)
                               .mapToObj(idx -> todo_list[idx])
                               .toArray(String[]::new);
    }
}