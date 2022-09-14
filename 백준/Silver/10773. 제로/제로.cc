#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	stack<int> s;
	int c, a;
	cin >> c;
	while (c--) {
		cin >> a;
		if (a == 0) {
			if (s.empty()) continue;
			else s.pop();
		}
		else s.push(a);
	}
	c = 0;
	while (!s.empty()) {
		c += s.top();
		s.pop();
	}
	cout << c;
}