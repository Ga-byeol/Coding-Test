#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int result = 100;

    for (int i = 0; i < b.size() - a.size() + 1; i++) {
        int count = 0;
        for (int j = 0; j < a.size(); j++) {
            if (a[j] != b[i + j]) count++;
        }
        if (result > count) result = count;
    }
    cout << result;
}