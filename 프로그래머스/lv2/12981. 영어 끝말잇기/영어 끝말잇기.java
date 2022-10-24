import java.util.Arrays;

class Solution {
    public int[] solution(int n, String[] words) {
        int[] answer = {0,0};
        String[] postwords = new String[words.length];
        int cnt = 1;
        
        postwords[0] = words[0];
        
        for(int i = 1; i < words.length; i++){
            if(Arrays.asList(postwords).contains(words[i]) || postwords[i-1].charAt(postwords[i - 1].length() - 1) != words[i].charAt(0)){
                answer[0] = i % n + 1;
                answer[1] = i / n + 1;
                return answer;
            }
            postwords[i] = words[i];
        }
        

        return answer;
    }
}