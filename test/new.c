#include <stdio.h>
#include <windows.h>


int a, b, c;
int main() {

	scanf("%d %d", &a,&b);
	if (a < b) {
		printf("%d\n", b - a);
	}
	else {
		printf("%d\n", a - b);
	}


	printf("Á¾·á\n");

	system("pause");
}