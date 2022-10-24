#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n,s,mi=INT_MAX,ma=INT_MIN;
    cin >> n;
    int a[n];
    int op[4];
    vector<int> v;
    
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<4;i++) cin >> op[i];
    int opn = op[0] + op[1] + op[2] + op[3];
    int arr[opn];
    
    for(int i=0;i<op[0];i++) v.push_back('+');
    for(int i=0;i<op[1];i++) v.push_back('-');
    for(int i=0;i<op[2];i++) v.push_back('x');
    for(int i=0;i<op[3];i++) v.push_back('%');
    
    for(int i=0;i<opn;i++) arr[i] = i;
    
    do
    {
        int sum = a[0];
        for(int i = 0; i<opn;i++)
        {
            if(v[arr[i]] == '+') sum += a[i+1];
            else if(v[arr[i]] == '-') sum -= a[i+1];
            else if(v[arr[i]] == 'x') sum *= a[i+1];
            else if(v[arr[i]] == '%') sum /= a[i+1];
        }
        
        mi = min(mi,sum);
        ma = max(ma,sum);
        
    }while(next_permutation(arr,arr+opn));
    cout << ma << '\n' << mi;
}