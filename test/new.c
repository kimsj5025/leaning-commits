#include <stdio.h>
#include <windows.h>


int a, b, c;
int main() {

	scanf_s("%d", &a);
	if (a<10)
	{
		printf("작");
	}
	else {
		printf("큼");
	}


	printf("\n종료\n");

	system("pause");
}