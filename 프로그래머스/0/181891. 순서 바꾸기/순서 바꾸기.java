import java.util.stream.IntStream;

class Solution {
    public int[] solution(int[] num_list, int n) {
        return IntStream.range(0, num_list.length).map(idx -> num_list[(idx + n) % num_list.length]).toArray();
    }
}