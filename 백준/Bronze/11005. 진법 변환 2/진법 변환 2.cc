#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    int B;
    cin >> B >> N;
    int cnt = 0;
    vector<int> v;
    
    
    while(true)
    {
        v.push_back(B%N);
        if(B < N) break;
        B /= N;
    }
    reverse(v.begin(),v.end());
    
    for(int x : v)
    {
        if(x > 9) cout << (char)(x + 'A' - 10);
        else cout << x;
    }
}