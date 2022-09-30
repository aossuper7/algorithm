#include <iostream>
using namespace std;

int d[1000001];
int go(int n) { // 재귀 방식
	if (n == 1)
		return 0;
	if (d[n] > 0)
		return d[n];
	d[n] = go(n - 1) + 1;
	if (n % 2 == 0) {
		int temp = go(n / 2) + 1;
		if (d[n] > temp)
			d[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = go(n / 3) + 1;
		if (d[n] > temp)
			d[n] = temp;
	}
	return d[n];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n;
	cin >> n;
	cout << go(n) << '\n';

	/*
	d[1] = 0; // for문 방식
	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0 && d[i] > d[i / 2] + 1)
			d[i] = d[i / 2] + 1;
		if (i % 3 == 0 && d[i] > d[i / 3] + 1)
			d[i] = d[i / 3] + 1;
	}
	cout << d[n] << '\n';
	*/
}