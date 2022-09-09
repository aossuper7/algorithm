#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	stack<int> s;
	int sum = 0;
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(')
			s.push(i);
		else if (i - s.top() == 1) {
			s.pop();
			sum += s.size();
		}
		else {
			s.pop();
			sum++;
		}
	}
	cout << sum;
}