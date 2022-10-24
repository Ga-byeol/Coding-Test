#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N;
    string B;
    cin >> B >> N;
    
    int len = B.size();
    int sum = 0;
    int num;
    
    for(int i = 0; i < len; i++)
    {
        if(B[i] <= '9') num = B[i] - '0';
        else if(B[i] >= 'A') num = B[i] - 'A' + 10;
        
        sum += pow(N,len - i - 1) * num;
    }
    
    cout << sum;
}