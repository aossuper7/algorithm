#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(;left<=right; left++) {
        int sum = 1;
        for(int i=1; i<=left/2; i++) {
            if(left%i == 0)
                sum++;
        }
        if(sum%2==0)
            answer += left;
        else answer -= left;
    }
    return answer;
}