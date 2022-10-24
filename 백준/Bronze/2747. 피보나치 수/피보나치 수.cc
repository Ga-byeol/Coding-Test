#include <iostream>

using namespace std;

int main() {
    int arr[46] = {0};
    int n;
    arr[0] = 0;
    arr[1] = 1;
    cin >> n;
    for(int i=2;i<=n;i++)
    {
        arr[i] = arr[i-2]+arr[i-1];
    }
    cout << arr[n];
}