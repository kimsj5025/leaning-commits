#include <stdio.h>
#include <windows.h>


float i = 0, n, i2, i3;


int main() {

	start();
	
	/*if (MessageBox(NULL, TEXT("Are you run progrme?"), TEXT("Are you sure?"), MB_YESNO) == 7) { 
		return; 
	};*/
	printf("�Է��� ������ �� : ");
	scanf("%f", &n);
	while (i < n) {

		scanf("%f", &i2);
		i3 += i2;
		i++;
	};
	printf("%0.2f", i3 / n);

}


int start() {
	system("title 0�� �Է��� ������ �����޾� ���� ����ϱ�");
	//system("mode con:cols=20 lines=20");
}