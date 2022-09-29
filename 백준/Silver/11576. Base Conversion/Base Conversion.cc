#include <iostream>
using namespace std;

void convert(int num, int b) {
	if (num == 0) return;
	convert(num / b, b);
	cout << num%b << ' ';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int a, b, m, s = 0;
	cin >> a >> b;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		s = s * a + x;
	}
	convert(s, b);
}