#include <iostream>
using namespace std;
int main() {
    long long k, w, m, r=0;
    cin >> k >> w >> m;
    while(k<w) {
        k+= m;
        r++;
    }
    cout << r;
}