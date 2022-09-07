#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> a >> b >> c;
    int d = 11 + 11 * 60 + 11 * 60 * 24;
    int e = c + b * 60 + a * 60 * 24 - d;
    if(e < 0 ) cout << -1 <<'\n';
    else cout << e <<'\n';
}