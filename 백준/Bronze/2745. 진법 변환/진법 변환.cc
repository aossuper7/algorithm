#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int b, s = 0;
	string str;
	cin >> str >> b;
	for (int i = 0; i < str.size(); i++) {
		if ('0' <= str[i] && str[i] <= '9')
			s = (str[i] - '0') + s * b;
		else
			s = (str[i] + 10 - 'A') + s * b ;
	}
	cout << s;
}