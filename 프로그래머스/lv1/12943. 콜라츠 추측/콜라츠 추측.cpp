#include <string>

using namespace std;

int solution(int num) {
    long long a = num;
    int i=0;
    while(a!=1 && i<500) {
        if(a%2 == 0)
            a /= 2;
        else
            a = a*3+1;
        ++i;
    }
    return (a!=1) ? -1 : i;
}