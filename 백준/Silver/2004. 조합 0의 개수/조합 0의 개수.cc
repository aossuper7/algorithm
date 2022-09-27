#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	long long n, m, i, t = 0, f = 0;
	cin >> n >> m;
	for (i = 2; i <= n; i *= 2)
		t += n / i;
	for (i = 2; i <= n - m; i *= 2)
		t -= (n - m) / i;
	for (i = 2; i <= m; i *= 2)
		t -= m / i;
	for (i = 5; i <= n; i *= 5)
		f += n / i;
	for (i = 5; i <= n - m; i *= 5)
		f -= (n - m) / i;
	for (i = 5; i <= m; i *= 5)
		f -= m / i;
	cout << min(t, f);
}