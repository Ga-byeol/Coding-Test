class Solution {
    public int solution(int n) {
        int answer = 0;
        String num = Integer.toBinaryString(n);
        int ncnt = num.replace("0","").length();
        
        while(true){
            n++;
            String str = Integer.toBinaryString(n);
            int scnt = str.replace("0","").length();
            if(ncnt == scnt){
                return n;
            }
        }
    }
}