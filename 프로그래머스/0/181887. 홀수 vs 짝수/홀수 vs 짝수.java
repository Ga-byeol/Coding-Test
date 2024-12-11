import java.util.stream.IntStream;
import java.lang.Math;

class Solution {
    public int solution(int[] num_list) {
        return Math.max(IntStream.range(0, num_list.length)
                                 .filter(idx -> idx % 2 == 0)
                                 .map(idx -> num_list[idx])
                                 .sum(),
                        IntStream.range(0, num_list.length)
                                 .filter(idx -> idx % 2 == 1)
                                 .map(idx -> num_list[idx])
                                 .sum());
    }
}