#include <stdio.h>
#include <windows.h>


float i = 0, n, i2, i3;


int main() {

	start();
	
	/*if (MessageBox(NULL, TEXT("Are you run progrme?"), TEXT("Are you sure?"), MB_YESNO) == 7) { 
		return; 
	};*/
	printf("입력할 정수의 수 : ");
	scanf("%f", &n);
	while (i < n) {

		scanf("%f", &i2);
		i3 += i2;
		i++;
	};
	printf("%0.2f", i3 / n);

}


int start() {
	system("title 0을 입력할 때까지 정수받아 더해 출력하기");
	//system("mode con:cols=20 lines=20");
}