class Solution {
    public int[][] solution(int[] num_list, int n) {
        int[][] answer = new int[num_list.length / n][n];
        
        int c = 0, r = 0;
        
        for(int x : num_list){
            answer[c][r++ % n] = x;
            
            if(r / n > 0){
                c++;
                r = 0;
            }
        }
        return answer;
    }
}