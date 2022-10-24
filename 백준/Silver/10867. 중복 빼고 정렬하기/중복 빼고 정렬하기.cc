#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> v;
    int num;
    vector<int>::iterator itr;
    for(int i = 0; i< N;i++) 
    {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(),v.end());
    itr = --unique(v.begin(),v.end());
    
    for(auto x : v)
    {
        cout << x << ' ';
        if(x == *itr) break;
    }
}