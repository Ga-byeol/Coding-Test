#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> v) {
    vector<string> answer;
    for_each(v.begin(), v.end(), [&answer](string str){if(!(str.find("ad")+1)) answer.push_back(str); });
    return answer;
}