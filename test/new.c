#include <stdio.h>
#include <windows.h>


int i = 0, n, i2;


int main() {

	start();
	
	if (MessageBox(NULL, TEXT("Are you run progrme?"), TEXT("Are you sure?"), MB_YESNO) == 7) { 
		return; 
	};

	while (1) {

		system("cls");

		i = 1, n = 0, i2 = 0;

		scanf("%d", &n);

		system("cls");

		while (i <= n) {

			i2 = 3 * i;
			printf("%d\n",i2);
			i++;

		};
		system("pause");
	};


}


int start() {
	system("title 3위 배수 n번 출력하기");
	//system("mode con:cols=30 lines=20");
}