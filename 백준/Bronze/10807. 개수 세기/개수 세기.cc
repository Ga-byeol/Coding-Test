#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v;
    
    int input;
    while(N--)
    {
        
        cin >> input;
        v.push_back(input);
    }
    cin >> input;
    
    cout << count(v.begin(),v.end(),input);
}