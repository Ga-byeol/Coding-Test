#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    n--;
    for(int i=2; i<=n; i++){
        if(n%i==0) return i;
    }
}