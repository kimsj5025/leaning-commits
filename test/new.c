#include <stdio.h>
#include <windows.h>


int i = 0, n, i2;


int main() {

	start();

	if (MessageBox(NULL, TEXT("Are you run progrem?"), TEXT("Are you sure?"), MB_YESNO) == 7) {
		return;
	};

	while (1) {

		system("cls");

		i = 1, n = 1, i2 = 0;

		do{

			if (n == 0) break;
			scanf("%d", &n);
			i2 = i2 + n;
			i++;
			system("cls");
		} while (1);
		printf("%d\n", i2);
		system("pause");
	};

}


int start() {
	system("title 0을 입력할 때까지 정수받아 더해 출력하기");
	system("mode con:cols=30 lines=20");
}