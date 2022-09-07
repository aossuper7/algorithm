#include <stdio.h>

int main(void) {
	int count, a, b;
	scanf("%d", &count);
	for (; count > 0; count--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}