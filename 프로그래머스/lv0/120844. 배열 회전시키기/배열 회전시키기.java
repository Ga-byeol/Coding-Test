class Solution {
    public int[] solution(int[] numbers, String direction) {
        int len = numbers.length;
        int[] answer = new int[len];
        
        int dir = direction.equals("right") ? 1 : len - 1;
        
        for(int x : numbers){
            answer[dir++ % len] = x;
        }
        
        return answer;
    }
}