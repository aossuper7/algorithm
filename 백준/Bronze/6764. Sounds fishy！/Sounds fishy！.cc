#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a[4];
    for(int i = 0; i < 4; i++) cin >> a[i];
    if(a[0] > a[1] && a[1] > a[2] && a[2] > a[3]) cout << "Fish Diving";
    else if(a[0] < a[1] && a[1] < a[2] && a[2] < a[3]) cout << "Fish Rising";
    else if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) cout << "Fish At Constant Depth";
    else cout << "No Fish";
}