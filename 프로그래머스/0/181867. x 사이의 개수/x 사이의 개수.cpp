#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int n = 0;
    for(char c : myString){
        if(c == 'x') {
            answer.push_back(n);
            n=0;
            continue;
        }
        n+=1;
    }
    answer.push_back(n);
    return answer;
}