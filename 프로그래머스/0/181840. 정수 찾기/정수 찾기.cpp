#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> v, int n) {
    return !!count(v.begin(), v.end(), n);
}