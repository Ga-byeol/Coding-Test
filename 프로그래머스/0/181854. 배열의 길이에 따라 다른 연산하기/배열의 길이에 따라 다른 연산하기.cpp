#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int temp = 0;
    if(!(size(arr)%2)) temp = 1;
    
    for(int i=temp; i<size(arr); i+=2){
        arr[i] += n;
    }
        
    return arr;
}