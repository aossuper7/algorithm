#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	stack<char> s;
	string str;
	getline(cin, str);
	
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '<') {
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			while (str[i] != '>') {
				cout << str[i];
				i++;
			}
			cout << str[i];
		}
		else if(str[i] != ' ') {
			s.push(str[i]);
		}
		else if(str[i] == ' ') {
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			cout << ' ';
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}