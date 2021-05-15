#include <stdio.h>
#include <windows.h>
int main() {
	system("title 구구단 계산기");


	int i = 0, eks=1, i2=0;

	while (i2 < 8) {
		eks++;
		i2++;
		i = 0;
		while (i < 9) {
			printf("%d * %d = %d\n", eks, i + 1, eks * (1 + i));
			i++;
		};
		printf("\n");

	};
	system("pause");

}
