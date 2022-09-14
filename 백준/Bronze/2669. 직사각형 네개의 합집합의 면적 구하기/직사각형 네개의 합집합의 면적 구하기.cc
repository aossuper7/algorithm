#include <iostream>
using namespace std;
int arr[101][101];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int x1, y1, x2, y2;
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = y1; j < y2; j++)
			for (int k = x1; k < x2; k++) {
				arr[j][k] = 1;
			}
	}
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			if (arr[i][j] == 1)
				sum++;
	cout << sum;
}