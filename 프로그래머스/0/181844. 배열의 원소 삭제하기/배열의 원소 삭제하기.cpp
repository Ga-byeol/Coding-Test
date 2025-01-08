#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for_each(delete_list.begin(), delete_list.end(), [&arr](int n){arr.erase(remove(arr.begin(), arr.end(), n), arr.end());});
    return arr;
}