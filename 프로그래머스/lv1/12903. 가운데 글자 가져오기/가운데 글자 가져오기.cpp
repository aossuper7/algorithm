#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length() / 2;
    if(s.length() % 2 == 0) {
        answer += s[len-1];
        answer += s[len];
    }
    else answer += s[len];
    return answer;
}