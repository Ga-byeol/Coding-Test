#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    if(num_list.size() > 10){
        for(int x : num_list) answer += x;
    }
    else {
        answer = 1;
        for(int x : num_list) answer *= x;
    }
    return answer;
}