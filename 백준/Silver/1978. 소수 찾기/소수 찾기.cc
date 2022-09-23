#include <iostream>
using namespace std;

bool prime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int c, a, s=0;
	cin >> c;
	while (c--) {
		cin >> a;
		if (prime(a))
			s++;
	}
	cout << s;
}