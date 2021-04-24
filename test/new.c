#include <stdio.h>
#include <windows.h>
int main() {

	float mid, end, trash,var;

	printf("** 과목별 점수 계산 프로그램 **\n\n");

	printf("\n중간고사 반영비율/받은점수 : ");
	scanf("%f %f", &var, &mid);
	mid = mid * var;

	printf("\n기말고사 반영비율/받은점수 : ");
	scanf("%f %f", &var, &end);
	end = end * var;

	printf("\n수행평가 반영비율/받은점수 : ");
	scanf("%f %f", &var, &trash);
	trash = trash * var;

	printf("\n총 점수 : %0.1f\n\n\n", end + trash + mid);

	system("pause");

}
