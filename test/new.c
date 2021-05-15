#include <stdio.h>
#include <windows.h>
int main() {
	system("title 구구단 계산기");


	int i = 0, eks=1, i2=0;

	while (i < 5) {
		i2 = i;
		while (i2 > 0) {
			printf("o");
			i2--;
		}
		printf("*\n");
		i++;
	}

	system("pause");

}
