import java.util.*;

class Solution {
    public Integer[] solution(int n) {
        Set<Integer> set = new TreeSet<Integer>();
        int k = 2;
        while(n != 1){
            if(n % k == 0){
                n /= k;
                set.add(k);
            }else k++;
        }
        
        Integer[] answer = set.toArray(new Integer[0]);
        return answer;
    }
}