#include <stdio.h>
#include <windows.h>

int main() {
	
	char a[2][4] = {
		{1,2,3,4},
		{5,6,7,8}

	};
	for ( int i = 0; i <2; i++)
	{
		for  (int i2 = 0; i2 <4; i2++)
		{
		printf("%d", a[i][i2]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
