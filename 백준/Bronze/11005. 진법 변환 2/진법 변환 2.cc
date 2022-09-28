#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int N, B, r;
	string str;
	cin >> N >> B;
	while (N > 0) {
		r = N % B;
		if (r < 10)
			str += (char)(r + '0');
		else
			str += (char)(r - 10 + 'A');
		N /= B;
	}
	reverse(str.begin(), str.end());
	cout << str;
}