#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v;
    
    int num;
    while(N--)
    {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(),v.end());
    
    int M;
    cin >> M;
    vector<int> card;
    
    while(M--)
    {
        cin >> num;
        card.push_back(num);
    }
    
    for(int x : card)
    {
       cout << upper_bound(v.begin(),v.end(),x) - lower_bound(v.begin(),v.end(),x) << ' ';
    }
}