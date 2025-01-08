#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int l = numbers.size();
    return max(numbers[0]*numbers[1], numbers[l-1]*numbers[l-2]);
}