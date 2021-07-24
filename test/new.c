#include <stdio.h>
#include <windows.h>

int main() {
	
	int a[3][9];

	for ( int i = 0; i <3; i++)
	{
		for  (int i2 = 0; i2 <9; i2++)
		{
			a[i][i2] = (i + 5) * (i2+1);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int i2 = 0; i2 < 9; i2++)
		{
			printf("%d ", a[i][i2]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
