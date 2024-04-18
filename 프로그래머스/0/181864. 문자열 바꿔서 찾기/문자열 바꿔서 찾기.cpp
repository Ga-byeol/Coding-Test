#include <string>
#include <vector>
#include <regex>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    pat = regex_replace(pat,regex("A"), "C");
    pat = regex_replace(pat,regex("B"), "A");
    pat = regex_replace(pat,regex("C"), "B");
    return myString.find(pat) < 0 || myString.find(pat) > 100 ? 0 : 1;
}