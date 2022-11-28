import java.util.*;

class Solution {
    public int solution(int[] numbers) { // 제일 큰 숫자가 여러개면 error
		
		Arrays.sort(numbers);
		
		return numbers[numbers.length-1] * numbers[numbers.length-2];
	}
}