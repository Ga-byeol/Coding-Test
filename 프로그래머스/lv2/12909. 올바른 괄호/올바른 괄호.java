class Solution {
    boolean solution(String s) {
        boolean answer = true;

        char[] ch = s.toCharArray();
        int cnt = 0;
        for(char x : ch){
            cnt += x == '(' ? 1 : -1;
            if(cnt < 0) return false;
        }
        if(cnt != 0 || ch[0] == ')' || ch[ch.length-1] == '(') answer = false;
        

        return answer;
    }
}