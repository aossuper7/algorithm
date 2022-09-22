#include <iostream>
#include <stack>
using namespace std;

int OpRank(char op) {
	switch (op) {
	case '*': case '/':
		return 5;
	case '+': case '-':
		return 3;
	case '(':
		return 1;
	}
	return -1;
}

int Order(char op1, char op2) {
	int o1 = OpRank(op1);
	int o2 = OpRank(op2);

	if (o1 > o2)
		return 1;
	else if (o1 < o2)
		return -1;
	else return 0;
}

int main() {
	string str, temp;
	cin >> str;
	stack<char> s;
	char ch;
	for (int i = 0; i < str.size(); i++) {
		ch = str[i];
		if (isalpha(ch))
			temp += ch;
		else {
			switch (ch) {
			case '(':
				s.push(ch);
				break;
			case ')':
				while (!s.empty() && s.top() != '(') {
					temp += s.top();
					s.pop();
				}
				s.pop();
				break;
			case '*': case '/': case '+': case '-':
				while (!s.empty() && Order(s.top(), ch) >= 0) {
					temp += s.top();
					s.pop();
				}
				s.push(ch);
			}
		}
	}
	while (!s.empty()) {
		temp += s.top();
		s.pop();
	}
	cout << temp;
}