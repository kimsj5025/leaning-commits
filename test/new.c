#include <stdio.h>
#include <windows.h>


int i = 10, n, i2;


int main() {

	start();
	
	if (MessageBox(NULL, TEXT("Are you run progrme?"), TEXT("Are you sure?"), MB_YESNO) == 7) { 
		return; 
	};

	scanf("%d", &n);
	while (i > 1) {


		printf("%d * %d = %d\n", n, i - 1, n * (i - 1));
		i--;
	};


}


int start() {
	system("title 0�� �Է��� ������ �����޾� ���� ����ϱ�");
	//system("mode con:cols=20 lines=20");
}