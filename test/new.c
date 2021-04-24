#include <stdio.h>
#include <windows.h>


float i = 0, n, i2, i3;


int main() {

	start();
	
	if (MessageBox(NULL, TEXT("Are you run progrem ?"), TEXT("Are you sure?"), MB_YESNO) == 7) { 
		return; 
	};

	
	printf("1이상의 수 입력  : ");
	scanf("%f", &n);
	do {
		printf("hello world\n");
		i++;
	} while (i <= n);
	system("pause");

}  


int start() {
	system("title 0을 입력할 때까지 정수받아 더해 출력하기");
	//system("mode con:cols=20 lines=20");
}