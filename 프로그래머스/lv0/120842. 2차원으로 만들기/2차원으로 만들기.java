class Solution {
    public int[][] solution(int[] num_list, int n) {
        int[][] answer = new int[num_list.length / n][n];
        
        int len = num_list.length;
        
        for(int i = 0; i < len; i++){
            answer[i/n][i%n] = num_list[i];
        }
        return answer;
    }
}