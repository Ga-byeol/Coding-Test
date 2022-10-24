import java.util.Arrays;

class Solution {
    public String solution(String s) {
        String answer = "";
        
        char[] ch = s.toCharArray();
        ch[0] -= (ch[0] >= 'a' && ch[0] <='z') ? 32 : 0;
        for(int i=1;i<s.length();i++)
        {
            if(ch[i] >= 'A' && ch[i] <='Z') ch[i] += 32;
            if(ch[i] >= 'a' && ch[i] <='z' && ch[i-1] == ' ') ch[i] -= 32;
        }
        answer = String.valueOf(ch);
        return answer;
    }
}