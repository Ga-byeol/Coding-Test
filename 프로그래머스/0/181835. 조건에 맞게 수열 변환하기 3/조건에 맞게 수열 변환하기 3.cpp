#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> v;
    if(k%2 == 1){
        for(int n : arr){
            v.push_back(n*k);
        }
    }
    else {
        for(int n : arr){
            v.push_back(n+k);
        }
    }
    return v;
}