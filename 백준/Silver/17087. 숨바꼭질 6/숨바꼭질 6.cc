#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n, s, d;
	vector<int> v;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		int diff = x - s;
		if (diff < 0) diff = -diff;
		v.push_back(diff);
	}
	d = v[0];
	for (int i = 1; i < n; i++) {
		d = gcd(d, v[i]);
	}
	cout << d;
}