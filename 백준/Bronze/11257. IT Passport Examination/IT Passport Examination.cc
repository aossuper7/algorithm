#include <iostream>
using namespace std;

int main() {
    int t, num, a, b, c, sum;
    cin >> t;
    while(t--) {
        cin >> num >> a >> b >> c;
        sum = a+b+c;
        cout << num << ' ' << sum << ' ';
        if(sum >= 55 && a >= 11 && b >= 8 && c >= 12)
            cout << "PASS\n";
        else cout << "FAIL\n";
    }
}