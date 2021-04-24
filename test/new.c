#include <stdio.h>
#include <windows.h>
int main() {
	int s;
	float x = 1.3, y = 1.8;
	s = x + y;
	printf("%d\n", s);
	s = (int)x + (int)y;
	printf("%d\n", s);
}