#include <iostream>
using namespace std;
int main() {
	long long a, s = 0;
	int b, c, d;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		cin >> c >> d;
		s += c * d;
	}
	if (a == s) cout << "Yes";
	else cout << "No";
}