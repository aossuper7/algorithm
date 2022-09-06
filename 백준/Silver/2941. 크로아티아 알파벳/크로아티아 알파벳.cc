#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '=') {
			if (s[i - 1] == 'z' && s[i - 2] == 'd') len--;
			len--;
		}
		if (s[i] == '-') len--;
		if (s[i] == 'j' && (s[i - 1] == 'l' || s[i - 1] == 'n')) len--;
	}
	cout << len;
}