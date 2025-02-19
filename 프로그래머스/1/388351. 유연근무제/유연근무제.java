class Solution {
    public int solution(int[] schedules, int[][] timelogs, int startday) {
        int answer = 0;
        for(int i=0; i<schedules.length; i++){
            int st = schedules[i]/100*60+schedules[i]%100;
            int day = startday;
            
            for(int time : timelogs[i]){
                if(day==6 || day==7) {
                    day%=7;
                    day++;
                    continue;
                }
                day++;
                time = time/100*60 + time%100;
                
                if(st+10 < time){
                    answer--;
                    break;
                }
            }
            answer++;
        }
        return answer;
    }
}