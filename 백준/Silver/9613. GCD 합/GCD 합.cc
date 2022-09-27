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
	int a, b, n;
	vector<int> v;
	cin >> a;
	while (a--) {
		cin >> b;
		long long s = 0;
		vector<int> v;
		for (int i = 0; i < b; i++) {
			cin >> n;
			v.push_back(n);
		}
		for (int i = 0; i < b; i++)
			for (int j = i + 1; j < b; j++)
				s += gcd(v[i], v[j]);
		cout << s << '\n';
	}
}