#include <stdio.h>
#include <windows.h>
int main() {
	system("title 구구단 계산기");
	system("mode con:cols=50 lines=30");


	int i = 0, eks;
	scanf("%d", &eks);
	while (i < 9) {
		

		printf("%d * %d = %d\n", eks, i + 1, eks * (1 + i));
		i++;
	};
	system("pause");

}
