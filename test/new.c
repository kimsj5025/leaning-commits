#include <stdio.h>
#include <windows.h>
int main() {
	system("title ������ ����");


	int i = 0, eks;
	scanf("%d", &eks);
	while (i < 99) {
		

		printf("%d * %d = %d\n", eks, i + 1, eks * (1 + i));
		i++;
	};
	system("pause");

}
