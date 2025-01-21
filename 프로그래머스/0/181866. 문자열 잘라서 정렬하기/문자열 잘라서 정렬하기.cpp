#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    istringstream  ss(myString);
    string buffer;
    while(getline(ss, buffer, 'x')){
        if(buffer == "") continue;
        answer.emplace_back(buffer);
    }
    sort(answer.begin(), answer.end());
    return answer;
}