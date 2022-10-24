#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string color;
    enum e_color
    {
        black, red, orange , yellow, green, blue, violet, grey, white
    };
    
    long long int ohm = 0;
    
    for(int i = 0;i < 3;i++)
    {
        cin >> color;

        if(color == "black")  i == 2 ? ohm * 1 : ohm += 0;
            
        else if(color == "brown") i == 2 ? ohm *= 10 : ohm +=1;
            
        else if(color == "red")   i == 2 ? ohm *= 100 : ohm += 2;
            
        else if(color == "orange")   i == 2 ? ohm *= 1000 : ohm += 3;
            
        else if(color == "yellow")   i == 2 ? ohm *= 10000 : ohm += 4;
            
        else if(color == "green")   i == 2 ? ohm *= 100000 : ohm += 5;
            
        else if(color == "blue")   i == 2 ? ohm *= 1000000 : ohm += 6;
            
        else if(color == "violet")   i == 2 ? ohm *= 10000000 : ohm +=7;
            
        else if(color == "grey")   i == 2 ? ohm *= 100000000 : ohm += 8;
            
        else if(color == "white")  i == 2 ? ohm *= 1000000000 : ohm += 9;
    
        if(i==0) ohm *= 10;
    }
    
    cout << ohm;
}