#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int n;
long long max_result = LLONG_MIN;
string expression;
vector<int> nums;
vector<char> ops;

long long calc(long long a, char op, long long b) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    return 0;
}

void dfs(int idx, long long current_val) {
    if (idx == ops.size()) {
        max_result = max(max_result, current_val);
        return;
    }

    dfs(idx + 1, calc(current_val, ops[idx], nums[idx + 1]));

    if (idx + 1 < ops.size()) {
        dfs(idx + 2, calc(current_val, ops[idx], calc(nums[idx + 1], ops[idx + 1], nums[idx + 2])));
    }
}

int main()
{
    cin >> n >> expression;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) nums.push_back(expression[i] - '0');
        else ops.push_back(expression[i]);
    }

    if (n == 1) cout << nums[0];
    else {
        dfs(0, nums[0]);
        cout << max_result;
    }
    return 0;
}