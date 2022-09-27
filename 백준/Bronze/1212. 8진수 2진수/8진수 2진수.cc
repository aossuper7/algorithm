#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	string octal[8] = { "000", "001", "010", "011", "100","101", "110", "111" };
	string str, temp;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (i == 0)
			cout << stoi(octal[str[i] - '0']);
		else
			cout << octal[str[i] - '0'];
	}
}