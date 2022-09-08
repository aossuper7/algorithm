#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    stack<char> left, right;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
        left.push(str[i]);

    int c;
    cin >> c;
    while (c--) {
        char a;
        cin >> a;
        switch (a) {
        case 'L': {
            if (left.empty())
                continue;
            right.push(left.top());
            left.pop();
            break;
        }
        case 'D': {
            if (right.empty())
                continue;
            left.push(right.top());
            right.pop();
            break;
        }
        case 'B': {
            if (left.empty())
                continue;
            left.pop();
            break;
        }
        case 'P': {
            cin >> a;
            left.push(a);
        }
        }
    }
    while (!(left.empty())) {
        right.push(left.top());
        left.pop();
    }
    while (!(right.empty())) {
        cout << right.top();
        right.pop();
    }
     
}