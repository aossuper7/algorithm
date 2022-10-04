#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int a[4], b, c;
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> b >> c;
	sort(a, a+4);
	b = max(b, c);
	for (int i = 1; i < 4; i++)
		b += a[i];
	cout << b;
}