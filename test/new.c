#include <stdio.h>
#include <windows.h>
int main() {
	float mid, end, trash,var;

	printf("** ���� ���� ��� ���α׷� **\n\n");

	printf("\n�߰���� �ݿ�����/�������� : ");
	scanf("%f %f", &var, &mid);
	mid = mid * var;

	printf("\n�⸻��� �ݿ�����/�������� :");
	scanf("%f %f", &var, &end);
	end = end * var;

	printf("\n������ �ݿ�����/�������� :");
	scanf("%f %f", &var, &trash);
	trash = trash * var;

	printf("\n�� ���� : %0.1f", end + trash + mid);

}
