#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int freq[1000001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	stack<int> s;
	int n;
	cin >> n;
	vector<int> A(n), NGF(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		freq[A[i]]++;
	}
	s.push(0);
	for (int i = 1; i < n; i++) { // 6
		while (!s.empty() && freq[A[s.top()]] < freq[A[i]]) {
			NGF[s.top()] = A[i];
			s.pop();

		}
		s.push(i); // 0 1 2
	}
	while (!s.empty()) {
		NGF[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < n; i++) {
		cout << NGF[i] << ' ';
	}
}