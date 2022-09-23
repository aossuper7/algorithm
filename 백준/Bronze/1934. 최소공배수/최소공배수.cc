#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int a, b, t, c;
	cin >> c;
	while (c--) {
		cin >> a >> b;
		t = a * b;
		// 유클리드 호제법 (최대공약수)
		while (b != 0) {
			int r = a % b;
			a = b;
			b = r;
		}
		cout << t / a << '\n'; //최소공배수
	}
}