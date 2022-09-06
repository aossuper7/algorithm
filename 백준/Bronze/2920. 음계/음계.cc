#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int ar[8];
	for (int i = 0; i < 8; i++) {
		cin >> ar[i];
	}
	if (is_sorted(begin(ar), end(ar))) {
		cout << "ascending";
	}
	else if (is_sorted(begin(ar), end(ar), greater<int>())) {
		cout << "descending";
	}
	else cout << "mixed";
}