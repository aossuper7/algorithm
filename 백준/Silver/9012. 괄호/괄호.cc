#include <iostream>
#include <string>
using namespace std;

string check(string str) {
    int s = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') s++;
        else s--;
        if (s < 0) return "NO";
    }
    if (s == 0) return "YES";
    else return "NO";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int c, s;
    cin >> c;
    cin.ignore();
    while (c--) {
        string str;
        cin >> str;
        cout << check(str) << '\n';
    }
}