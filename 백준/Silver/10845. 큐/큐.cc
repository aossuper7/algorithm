#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	queue<int> q;
	int c;
	cin >> c;
	while (c--) {
		string str;
		cin >> str;
		if (str == "push") {
			int a;
			cin >> a;
			q.push(a);
		}
		else if (str == "pop") {
			if (q.empty()) cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str == "size")
			cout << q.size() << '\n';
		else if (str == "empty") {
			if (q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (str == "front") {
			if (q.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << q.front() << '\n';
		}
		else if (str == "back") {
			if (q.empty()) {
				cout << -1 << '\n';
				continue;
			}
			cout << q.back() << '\n';
		}
	}
}