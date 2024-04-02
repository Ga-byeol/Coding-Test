#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {

    return sqrt(n)-(int)sqrt(n) == 0 ? 1 : 2;
}