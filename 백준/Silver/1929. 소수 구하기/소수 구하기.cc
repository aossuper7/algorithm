#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int a, b;
	cin >> a >> b;
	vector<bool> check(b+1);
	//에라토스테네스의 체
	check[0] = check[1] = true;
	for (int i = 2; i * i <= b; i++) {
		if (check[i] == false)
			for (int j = i * 2; j <= b; j += i)
				check[j] = true;
	}
	for (; a <= b; a++)
		if (check[a] == false)
			cout << a << '\n';
}