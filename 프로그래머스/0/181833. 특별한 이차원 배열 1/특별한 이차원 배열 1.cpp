#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        answer.push_back(v);
    }
    for(int i=0;i<n;i++){
        answer[i][i] = 1;
    }
    return answer;
}