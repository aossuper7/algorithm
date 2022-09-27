#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	string str;
	cin >> str;
	while (str.size() % 3 != 0)
		str = '0' + str;

	for (int i = 0; i < str.size(); i += 3)
		cout << (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0') * 1;
}