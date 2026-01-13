import java.util.Arrays;

class Solution {
    public long solution(long n) {
        char[] charArray = String.valueOf(n).toCharArray();
        
        Arrays.sort(charArray);
        
        StringBuffer sb = new StringBuffer(new String(charArray));
        sb.reverse();
        
        return Long.parseLong(sb.toString());
    }
}