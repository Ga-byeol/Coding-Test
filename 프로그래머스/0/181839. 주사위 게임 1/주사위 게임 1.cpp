#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    return a%2 && b%2 ? a*a+b*b : a%2 || b%2 ? (a+b)*2 : abs(a-b);
}