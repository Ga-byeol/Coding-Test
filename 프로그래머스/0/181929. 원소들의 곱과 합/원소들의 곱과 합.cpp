#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int a = 1, b = 0;
    for(int n : num_list){
        a *= n;
        b += n;
    }
    
    return a > b*b ? 0 : 1;
}