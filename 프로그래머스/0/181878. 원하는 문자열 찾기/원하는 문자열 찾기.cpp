#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);
    if(myString.length() < pat.length()) return 0;
    return  myString.find(pat) == string::npos ?  0 : 1;
}