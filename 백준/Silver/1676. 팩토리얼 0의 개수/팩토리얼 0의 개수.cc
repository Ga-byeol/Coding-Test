#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    int N;

    int cnt=0;

    cin >> N;
    
    for(int i=2;i<=N;i++)
    {
        if(i%5==0) cnt++;
        if(i%25==0) cnt++;
        if(i%125==0) cnt++;
    }

    cout << cnt;
}