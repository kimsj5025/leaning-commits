#include <stdio.h>
#include <windows.h>


float i = 0, n, i2, i3;


int main() {

	start();
	
	if (MessageBox(NULL, TEXT("Are you run progrem ?"), TEXT("Are you sure?"), MB_YESNO) == 7) { 
		return; 
	};

	
	printf("1�̻��� �� �Է�  : ");
	scanf("%f", &n);
	do {
		printf("hello world\n");
		i++;
	} while (i <= n);
	system("pause");

}  


int start() {
	system("title 0�� �Է��� ������ �����޾� ���� ����ϱ�");
	//system("mode con:cols=20 lines=20");
}