#include <iostream>
using namespace std;

long long d[91];

long long go(int n) {
	if (n <= 1) return n;
	else {
		if (d[n] > 0) return d[n];
		d[n] = go(n - 1) + go(n - 2);
		return d[n];
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n;
	cin >> n;
	cout << go(n);
}