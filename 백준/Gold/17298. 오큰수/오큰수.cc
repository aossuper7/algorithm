#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	stack<int> s;
	int n;
	cin >> n;
	vector<int> A(n), NGE(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];

	s.push(0);
	for (int i = 1; i < n; i++) {
		while (!s.empty() && A[s.top()] < A[i]) {
			NGE[s.top()] = A[i];
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()) {
		NGE[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < n; i++) {
		cout << NGE[i] << ' ';
	}
}