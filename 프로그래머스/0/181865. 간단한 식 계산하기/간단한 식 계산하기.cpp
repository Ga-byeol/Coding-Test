#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string binomial) {
    int answer = 0;
    istringstream ss(binomial);
    string buffer, op;
    getline(ss,buffer,' ');
    answer = stoi(buffer);
    getline(ss,buffer,' ');
    op = buffer;
    getline(ss,buffer,' ');
    if(op == "+") answer += stoi(buffer);
    else if(op == "-") answer -= stoi(buffer);
    else answer *= stoi(buffer);
  
    

    return answer;
}