#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int arr[8];
    cin >> N;
    
    for(int i = 0;i< N; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    
    int sum;
    int max = 0;
    
    while(next_permutation(arr,arr+N))
    {
        sum=0;
        for(int i = 1; i < N;i++)
        {
            sum+=abs(arr[i-1]-arr[i]);
        }
        
        if(max < sum) max=sum;
    }
    
    cout << max;
}