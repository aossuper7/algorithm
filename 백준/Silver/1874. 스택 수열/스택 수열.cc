#include <iostream>
#include <stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    stack<int> s;
    string str;
    int c, a, b = 0;
    cin >> c;
    while (c--) {
        cin >> a;
        while (s.empty()  || s.top() < a) {
            s.push(++b);
            str += "+\n";
        }
        if (a != s.top()) {
            cout << "NO";
            return 0;
        }
        s.pop();
        str += "-\n";
    }
    cout << str;
}