#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> a;
    string s = to_string(n);
    for(int i=s.length()-1; i>=0; i--)
        a.push_back(s[i]-'0');
    return a;
}