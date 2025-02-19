class Solution {
    public int solution(int[] wallet, int[] bill) {
        int answer = 0;
        while(!(wallet[0] >= bill[0] && wallet[1] >= bill[1] || wallet[0] >= bill[1] && wallet[1] >= bill[0])){
            answer++;
            int dir = bill[0] > bill[1] ? 0 : 1;
            bill[dir] /= 2;
        }
        return answer;
    }
}