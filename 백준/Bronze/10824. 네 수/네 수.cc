#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	string str1, str2;
	unsigned long long a, b, c, d;
	cin >> a >> b >> c >> d;
	str1 = to_string(a);
	str1 += to_string(b);
	str2 = to_string(c);
	str2 += to_string(d);
	a = stoull(str1);
	b = stoull(str2);
	cout << a + b;
}