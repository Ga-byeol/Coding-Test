#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int convertSec(string time);
string convertStr(int time);

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    map<string, int> timeCmd = {{"next", 10}, {"prev", -10}};
    int vlSec = convertSec(video_len);
    int posSec = convertSec(pos);
    int osSec = convertSec(op_start);
    int oeSec = convertSec(op_end);
    
    for(string cmd : commands){
        if(posSec >= osSec && posSec <= oeSec)
            posSec = oeSec;
        posSec += timeCmd[cmd];
        if(posSec < 0) posSec = 0;
        else if(posSec > vlSec) posSec = vlSec;
    }
    if(posSec >= osSec && posSec <= oeSec)
            posSec = oeSec;
    return convertStr(posSec);
}

int convertSec(string time){
    return (time[0]-'0') * 600 + (time[1]-'0') * 60 + (time[3]-'0') * 10 + (time[4]-'0');
}
string convertStr(int time){
    string str = "00:00";
    str[0] = (time/600)+'0';
    str[1] = (time%600/60)+'0';
    str[3] = (time%60/10)+'0';
    str[4] = (time%10)+'0';
    return str;
}