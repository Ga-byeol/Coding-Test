import java.util.*;

class Solution {
    public int solution(int[] bandage, int health, int[][] attacks) {
        int sec = 0;
        int att = 0;
        int hp = health;
        for(int i=0;i<=attacks[attacks.length-1][0];i++){
            sec++;
            if(attacks[att][0] == i) {
                hp -= attacks[att][1];
                sec = 0;
                att++;
            }
            else hp += bandage[1];

            if(sec == bandage[0]) {
                hp += bandage[2];
                sec = 0;
            }
            if(health < hp) hp = health;
            if(hp <= 0) return -1;
        }
        return hp;
    }
}