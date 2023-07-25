import java.util.Arrays;
import java.util.stream.Stream;

class Solution {
    public int[] solution(int[] arr) {
            
        return Arrays
            .stream(arr)
            .mapToObj(Integer::toString)
            .map(s -> (s+",").repeat(Integer.parseInt(s)))
            .map(s -> s.split(","))
            .flatMap(s -> Arrays.stream(s))
            .mapToInt(Integer::parseInt)
            .toArray();
    }
}