#include <stdio.h>
#include <windows.h>
int main() {

	int min = 10;

	int i = 0;
	int i2 = 2;
	printf("±¸±¸´Ü\n");
	while (i < 9)
	{
		i++;
		printf("%d*%d=%d", i2, i, i2 * i);
		printf("\n");
		Sleep(10);

		if (i > 8) {
			i = 0;
			i2++;
		};

		if (i2 == 10)
		{
			return;
		};
	};
	return 0;
}