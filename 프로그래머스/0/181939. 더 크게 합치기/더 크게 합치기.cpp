#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int x = stoi(to_string(a)+to_string(b));
    int y = stoi(to_string(b)+to_string(a));
    return x > y ? x : y;
}