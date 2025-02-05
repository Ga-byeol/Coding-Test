import java.util.*;

class Solution {
    public boolean isPossible(long time, int a, int b, int[] g, int[] s, int[] w, int[] t){
        int n = g.length;
        long total = 0;
        long totalG = 0;
        long totalS = 0;
        
        for(int i=0; i < n; i++){
            long cnt = time / (t[i] * 2L);
            if(time % (2L * t[i]) >= t[i]) cnt++;
            
            long tmp = cnt * w[i];
            total += Math.min(tmp, g[i] + s[i]);
            totalG += Math.min(tmp, g[i]);
            totalS += Math.min(tmp, s[i]); 
        }
        if (total >= a+b && totalG >= a && totalS >= b) return true;
        return false;
    }
    
    public long solution(int a, int b, int[] g, int[] s, int[] w, int[] t) {
        long h = (long)Math.pow(10, 14) * 4;
        long l = 0;
        
        while(l< h){
            long mid = (l + h) / 2;
            if(isPossible(mid, a, b, g, s, w, t)) h = mid;
            else l = mid + 1;
        }
        
        return h;
    }
}