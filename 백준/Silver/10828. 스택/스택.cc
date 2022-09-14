#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	stack<int> s;
	int c;
	cin >> c;
	while (c--) {
		string str;
		cin >> str;
		if (str == "push") {
			int a;
			cin >> a;
			s.push(a);
		}
		else if (str == "pop") {
			if (s.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << s.top() << '\n';
			s.pop();
		}
		else if (str == "size")
			cout << s.size() << '\n';
		else if (str == "empty") {
			if (s.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (str == "top") {
			if (s.empty()) cout << -1 << '\n';
			else cout << s.top() << '\n';
		}
	}
}