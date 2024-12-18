class Solution {
    public int solution(String my_string, String is_suffix) {
        if(is_suffix.length() > my_string.length()) return 0;
        for(int i = is_suffix.length() - 1; i >= 0; i--){
            if(my_string.charAt(my_string.length() - is_suffix.length() + i) != is_suffix.charAt(i)) return 0;
        }
        
        return 1;
    }
}