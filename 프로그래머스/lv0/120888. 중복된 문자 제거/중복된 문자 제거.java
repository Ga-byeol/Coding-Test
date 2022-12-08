class Solution {
    public StringBuilder solution(String my_string) {
        String answer = "";
        StringBuilder sb = new StringBuilder();
        
        for(int i = 0; i < my_string.length(); i++){
            if(!contains(sb, Character.toString(my_string.charAt(i)))) sb.append(my_string.charAt(i));
        }
        return sb;
    }
    public static boolean contains(StringBuilder sb, String findString){
        return sb.indexOf(findString) > -1;
     }
}