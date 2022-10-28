class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int[] cnt = new int[1001];
        int[] dup = new int[1001];
        
        for(int x : array){
            cnt[x]++;
        }
        
        int max = 0;
        int index = 0;
        
        for(int i = 0; i < cnt.length; i++){
            if(max <= cnt[i]){
                max = cnt[i];
                dup[max]++;                
                index = i;
            }
        }
        if(dup[max] > 1) return -1;
        
        return index;
    }
}