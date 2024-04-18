#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string rny_string) {
    string answer = "";
    int index = rny_string.find("m");

    while(0 <= index){
        rny_string.replace(index, 1, "rn");
        index = rny_string.find("m");
    }
    return rny_string;
}