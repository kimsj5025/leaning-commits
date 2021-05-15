#include <stdio.h>
#include <windows.h>


int i, n, i2, i3, a, b, c;


int main() {
	
	scanf("%d", &a);

	for (i = 0; i <= a; i++) {
		for ( i2 = 0; i2 + i < a; i2++)
		{
			printf("*");
		}
		printf("\n");
}
	system("pause");
	


}