#include <stdio.h>
int main(void) {
	int i = 0, n, m = 0;
	float s = 0;
	scanf("%d", &n);
	int a[n];
	for (; i < n; i++) {
		scanf("%d", &a[i]);
		if (m < a[i]) m = a[i];
		s += a[i];
	}
	printf("%f", (s / m * 100) / n);
}