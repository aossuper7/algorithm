#include <iostream>
using namespace std;

int main() {
	int ar[26] = {0};
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
		ar[str[i] - 'a']++;
	for (int a : ar)
		cout << a << ' ';
}