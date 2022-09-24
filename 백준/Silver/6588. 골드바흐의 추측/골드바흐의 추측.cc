#include <iostream>
#define MAX 1000000
using namespace std;
bool check[MAX + 1];
int prime[MAX];
int pn;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	check[0] = check[1] = true;
	for (int i = 2; i <= MAX; i++)
		if (check[i] == false) {
			prime[pn++] = i;
			for (int j = i * 2; j <= MAX; j += i)
				check[j] = true;
		}

	while (1) {
		int a;
		cin >> a;
		if (a == 0)
			break;
		for (int i = 1; i < pn; i++)
			if (check[a - prime[i]] == false) {
				cout << a << " = " << prime[i] << " + " << a - prime[i] << '\n';
				break;
			}
	}
}