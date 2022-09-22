#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int a[26];
	cin >> s;
	for (int i = 0; i < sizeof(a) / 4; i++)
		a[i] = -1;
	for (int i = 0; i < s.length(); i++)
		if (a[s.at(i) - 'a'] == -1)
			a[s.at(i) - 'a'] = i;
	for (int i = 0; i < sizeof(a) / 4; i++)
		cout << a[i] << ' ';
}