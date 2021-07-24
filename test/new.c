#include <stdio.h>
#include <windows.h>

int main() {
	int n, i3 = 0;
	int a[100][100] ;
	scanf_s("%d",&n);
	for ( int i = 0; i <n; i++)
	{
		for  (int i2 = 0; i2 <n; i2++)
		{
			i3++;
			a[i][i2] = i3;
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int i2 = 0; i2 < n; i2++)
		{
			printf("%d ", a[i][i2]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
