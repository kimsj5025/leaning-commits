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
		printf("\(�ſ� ģ���� ������\)1�̻��� ������ �Է����ּ��� : ");
		scanf("%d", &n);

		system("cls");
		do{
			printf("\(�ſ� ģ���� ������\)��� ���� : ");
			i2 = 3 * i;
			printf("%d\n", i2);
			i++;

		}while (i <= n);
		system("pause");
	};


}


int start() {
	system("title 3�� ��� n�� ����ϱ�");
	//system("mode con:cols=30 lines=20");
}