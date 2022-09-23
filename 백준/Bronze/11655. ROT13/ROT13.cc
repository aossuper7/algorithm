#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	string str;
	char ch;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		ch = str[i];
		if (isalpha(ch)) {
			if (('N' <= ch && ch <= 'Z') || ('n' <= ch && ch <= 'z'))
				ch -= 13;
			else
				ch += 13;
			str[i] = ch;
		}
	}
	cout << str;
}