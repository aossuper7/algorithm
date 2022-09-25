#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	string str;
	int i;
	while (1) {
		stack<char> s;
		getline(cin, str);

		if (str[0] == '.')
			break;

		for (i = 0; i < str.size(); i++) {
			char ch = str[i];
			if (ch == '(' || ch == '[')
				s.push(ch);
			else if (ch == ')') {
				if (!s.empty() && s.top() == '(')
					s.pop();
				else
					break;
			}
			else if (ch == ']') {
				if (!s.empty() && s.top() == '[')
					s.pop();
				else
					break;
			}
		}
		if (i == str.size() && s.empty())
			cout << "yes\n";
		else cout << "no\n";
	}
}