import java.util.stream.IntStream;
class Solution {
    public int[] solution(int start_num, int end_num) {
        return IntStream.range(end_num, start_num+1).map(idx -> start_num + end_num - idx).toArray();
    }
}