#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> v, int k) {
    transform(v.begin(),v.end(),v.begin(),[k](int x){return k&1?x*k:x+k;});
    return v;
}