#include <stdio.h>
#include <windows.h>


int i, n, i2, i3, a, b, c;


int main() {
	
	scanf_s("%d", &a);

	for (i = 0; i <= a; i++) {

		for (i2 = 0; i2 + i < a; i2++)
		{
			printf(" ");
		}

		for (i2 = 0; i2 <= i; i2++)
		{
			printf("*");
		}

		for (i3 = 0; i3 < i; i3++)
		{
			printf("*");
		}
		//i =5

		printf("\n");
}

	for (i = 0; i <= a; i++) {

		for (i2 = -1; i2 < i; i2++)
		{
			printf(" ");
		}

		for (i2 = a-1; i2 >= i; i2--)
		{
			printf("*");
		}

		for (i3 = a-1; i3 > i; i3--)
		{
			printf("*");
		}
		//i =5

		printf("\n");
	}


	system("pause");
	


}