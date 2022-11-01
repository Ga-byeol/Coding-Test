import java.util.*;

class Solution {
    public String solution(String s) {
        int m = s.length() / 2;
        String answer = "";
        if(s.length() % 2 == 0) answer += String.valueOf(s.charAt(m-1));
        answer += String.valueOf(s.charAt(m));
        return answer;
    }
}