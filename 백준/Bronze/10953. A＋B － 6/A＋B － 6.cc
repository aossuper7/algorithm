#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a, b, c;
    char d;
    cin >> c;
    while (c--) {
        cin >> a >> d >> b;
        cout << a + b << '\n';
    }
}