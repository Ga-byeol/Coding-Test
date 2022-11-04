import java.util.*;

class Solution {
    public String solution(String letter) {
        String answer = "";
        String[] morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        String[] str = letter.split(" ");

        
        for(String x : str){
            answer += (char)(Arrays.asList(morse).indexOf(x) + 97);
        }
            
        return answer;
        
    }
}