#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    return (" "+to_string(num)).find(to_string(k));
}