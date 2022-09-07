#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    stack<int> s;
    string str;
    int c, a, b = 0;
    cin >> c;
    while (c--) {
        cin >> a;
        while (s.empty()  || s.top() < a) {
            b++;
            s.push(b);
            str += "+\n";
        }
        if (a == s.top()) {
            s.pop();
            str += "-\n";
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << str;
}