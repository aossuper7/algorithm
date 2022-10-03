#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	string str;
	int a, b;
	cin >> a >> b;
	while (a--) {
		cin >> str;
		reverse(str.begin(), str.end());
		cout << str << '\n';
	}
}