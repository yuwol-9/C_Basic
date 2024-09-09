#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	
	int c1 = multiply(a, b);
	int c2 = add(a, b);
	int c3 = subtract(a, b);
	printf("%d\n%d\n%d\n", c1, c2, c3);

	return 0;
}

int multiply(int x, int y) {
	return x * y
}

int add(int x, int y) {
	return x + y
}

int subtract(int x, int y) {
	return x - y
}
