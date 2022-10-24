import java.util.*;

class Solution {
    public int solution(int[] people, int limit) {
        int answer = 0;
        Arrays.sort(people);
        Deque<Integer> deq = new ArrayDeque();
        for(int x : people){
            deq.add(x);
        }
        while(!deq.isEmpty()){
            if(deq.peek() + deq.peekLast() <= limit){
                deq.poll();
                deq.pollLast();
                answer++;
            }
            else {
                deq.pollLast();
                answer++;
            }
        }
        
        return answer;
    }
}