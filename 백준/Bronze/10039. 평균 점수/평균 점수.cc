#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int num, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num <= 40)
			sum += 40;
		else sum += num;
	}
	cout << sum / 5;
}