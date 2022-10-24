#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    int result=1;
    
    cin >> N;
    
    for(int i=2;i<=N;i++) result *= i;
    
    cout << result;
}