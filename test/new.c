#include <stdio.h>
#include <windows.h>
int main() {

	start();
	
	if (MessageBox(NULL, TEXT("Are you run progrme?"), TEXT("Are you sure?"), MB_YESNO) == 7) { 
		return; 
	};


	int i = 0, eks, i2;
	while (1) {
		system("cls");
		i = 1, eks = 0, i2 = 0;
		printf("정수를 입력하세요 : ");
		scanf("%d", &eks);
		while (i <= eks) {

			i2 = i2 + i;
			i++;
		};
		printf("입력된 수 까지의 합 : %d\n\n", i2);
		system("pause");
	};


}


int start() {
	system("title 입력된 수 까지의 합 구하기");
	system("mode con:cols=35 lines=20");
}