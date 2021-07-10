#include <stdio.h>
#include <windows.h>

int main() {

	printf("%d", f(5));
	system("pause");
	return 0;

}

int f(int n) {

	if (n == 1) return 1;
	return n * f(n - 1);

}
