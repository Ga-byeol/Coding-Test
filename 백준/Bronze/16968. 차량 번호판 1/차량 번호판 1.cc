#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string car;
    cin >> car;
    int num[4] = {1,1,1,1};
    for(int i=0;i<car.size();i++)
    {
        if(car[i] == 'd') num[i] = 10;
        else num[i] = 26;
    }
    for(int i=0;i<car.size()-1;i++)
    {
        if(car[i] == car[i+1]) num[i+1]--;
    }
    cout << num[0]*num[1]*num[2]*num[3];
}