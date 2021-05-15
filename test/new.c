#include <stdio.h>
#include <windows.h>


int a, b, c;
int main() {

	scanf_s("%d %d %d", &a,&b,&c);
	if (c < a+b)
	{
		printf("¤·¤·");
	}
	else {
		printf("¤¤¤¤");
	}


	printf("\nÁ¾·á\n");

	system("pause");
}