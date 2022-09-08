#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    string s = to_string(x);
    int a=0;
    for(int i=0; i<s.length(); i++) {
        a += s[i]-'0';
    }
    return x%a==0;
}