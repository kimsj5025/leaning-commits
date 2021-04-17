#include <stdio.h>
#include <windows.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d %d ", a&b,a|b,a^b);
}