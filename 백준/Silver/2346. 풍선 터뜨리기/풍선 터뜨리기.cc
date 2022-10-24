#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    vector<pair<int,int>> v;
    
    int n;
    int num;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back({i+1,num});
    }
    
    while (!v.empty())
    {
        cout << v.front().first << ' ';
        int move = v.front().second;
        v.erase(v.begin());
        if (move > 0)
        {
            for (int i=0; i<move-1; i++)
            {
                v.push_back(v.front());
                v.erase(v.begin());
            }
        }
        else
        {
            for (int i=0; i<-move; i++)
            {
                v.insert(v.begin(), v.back());
                v.pop_back();
            }
        }
    }
}