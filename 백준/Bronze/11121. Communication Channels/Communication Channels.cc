#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int t;
	string a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (!a.compare(b))
			cout << "OK\n";
		else
			cout << "ERROR\n";
	}
}