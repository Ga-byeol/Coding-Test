#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int solution(int a, int b, int c) {
    int answer = 1;
    vector<int> dice(7,0);
    dice[a]++;dice[b]++;dice[c]++;
    for(int i=1;i<= *max_element(dice.begin(), dice.end());i++) 
        answer *= pow(a,i) + pow(b,i) + pow(c,i);
    return answer;
}