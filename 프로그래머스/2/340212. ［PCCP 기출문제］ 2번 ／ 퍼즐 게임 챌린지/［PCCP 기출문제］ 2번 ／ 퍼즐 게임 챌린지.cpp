#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool search(vector<int> diffs, vector<int> times, long long limit, int level);

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int low = 1, high = *max_element(diffs.begin(), diffs.end());
    
    while(low <= high){
        int mid = (low+high)/2;
        if(search(diffs, times, limit, mid)) high = mid-1;
        else low = mid+1;
    }
    return low;
}

bool search(vector<int> diffs, vector<int> times, long long limit, int level){
    long long total_time=0;
    
    for(int i=0;i<diffs.size();i++){
        if(level >= diffs[i])
            total_time += times[i];
        else
            total_time += (diffs[i] - level) * (times[i] + times[i-1]) + times[i];
        if(total_time > limit)
            return false;
    }
    return true;
}