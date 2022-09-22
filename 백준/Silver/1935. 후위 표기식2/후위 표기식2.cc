#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int c;
	cin >> c;
	vector<int> v(c);
	stack<double> s;
	char ch;
	string str;
	cin >> str;
	for (int i = 0; i < c; i++)
		cin >> v[i];

	for (int i = 0; i < str.size(); i++) {
		ch = str[i];
		if (isalpha(ch))
			s.push(v[ch - 'A']);
		else {
			double sec = s.top();
			s.pop();
			double fir = s.top();
			s.pop();
			switch (ch) {
			case '+':
				s.push(fir + sec);
				break;
			case '-':
				s.push(fir - sec);
				break;
			case '*':
				s.push(fir * sec);
				break;
			case '/':
				s.push(fir / sec);
			}
		}
	}
	cout.precision(2);
	cout << fixed;
	cout << s.top();
}