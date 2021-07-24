#include <stdio.h>
#include <windows.h>

int main() {

	int a=1, b=2;
	switchNum(&a,&b);

	printf("%d %d\n", a, b);

	system("pause");

	return 0;

}

int switchNum(int *a,int *b) {
	int i;
	i = *a;
	*a = *b;
	*b = i;
	
}