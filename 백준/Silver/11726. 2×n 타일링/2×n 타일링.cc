#include <iostream>
using namespace std;

int d[1001];

int go(int n) {
	if (n <= 1) 
		return 1;
	if (d[n] > 0)
		return d[n];
	d[n] = go(n - 1) + go(n-2);
	d[n] %= 10007;
	return d[n];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n;
	cin >> n;
	cout << go(n) << '\n';
}