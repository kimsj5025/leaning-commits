#include <stdio.h>
#include <windows.h>
int main() {
	system("title 구구단 계산기");


	int i = 0, eks=1, i2=0;

	while (i2 < 5) {
	
		printf("0보다 큰 수를 입력하세요(%d 번째) : ",i2+1);
		scanf("%d", &eks);
		while (eks > 0) {
		i2++;
		i=i + eks;
		eks = -1;
		}
	

	};
	printf("\n\ntotal : %d\n\n", i);
	system("pause");

}
