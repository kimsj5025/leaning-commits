#include <stdio.h>
#include <windows.h>


int a, b, c;
int main() {

	scanf("%d %d %d", &a,&b,&c);
	if ((a-b+c)%10 == 0)
	{
		printf("����");
	}
	else {
		printf("��������");
	}


	printf("\n����\n");

	system("pause");
}