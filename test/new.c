#include <stdio.h>
#include <windows.h>
int main() {
	int a, b;
	a = 4 * (1/2);//int가 정수형이라서 1/2는 0이 되고 4*0 = 0이 된다
	b = a++;
	printf("%d\n%d", a, b);
}
//???????????????????????