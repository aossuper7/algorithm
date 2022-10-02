#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a + d <= b + c)
		cout << a + d;
	else
		cout << b + c;
}