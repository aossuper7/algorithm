#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	string str;
	while (1) {
		stack<char> s;
		int i = 0;
		getline(cin, str);

		if (str == ".")
			break;

		for (char ch : str) {
			if (ch == '(' || ch == '[')
				s.push(ch);
			else if (ch == ')') {
				if (s.empty() || s.top() != '(') {
					i++;
					break;
				}
				s.pop();
			}
			else if (ch == ']') {
				if (s.empty() || s.top() != '[') {
					i++;
					break;
				}
				s.pop();
			}
		}
		if (!s.empty())
			i++;
		cout << (i >= 1 ? "no" : "yes") << '\n';
	}
}