#include <iostream>
using namespace std;

int solution(int n) {
    int x=0;
    while(n%++x != 1);
    return x;
}