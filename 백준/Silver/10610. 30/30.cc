#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr[100005];
    char str[100005];
    cin >> str;
    int len = strlen(str);
    for(int i=0;i<len;i++) arr[i] = str[i]-'0';
    sort(arr,arr+len);
    int sum=0;
    for(int i=0;i<len;i++) sum+=arr[i];
    if(arr[0]||sum%3) cout << -1;
    
    else for(int i=len-1;i>=0;i--) cout<<arr[i];
}