#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int a, b, s=0;
	cin >> a;
	for (int i = 0; i < 5; i++) {
		cin >> b;
		if (a == b)
			s++;
	}
	cout << s;
}