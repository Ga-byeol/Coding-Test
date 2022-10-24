#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n;i++) cin >> arr[i];
    
    if (next_permutation(arr,arr+n) == 0)
    {
        cout << -1;
        return 0;
    }
    for(int x : arr) cout << x << ' ';
}