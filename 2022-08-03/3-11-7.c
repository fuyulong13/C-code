#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3
//进制转换的明示常量定义
int main(void)
{
	float pint, cup, ounce, spoon, tea_spoon;
	printf("Enter how many cup:");
	scanf("%f", &cup);
	pint = cup / PINT_CUP;
	ounce = cup * CUP_OUNCE;
	spoon = ounce * OUNCE_SPOON;
	tea_spoon = spoon * SPOON_TEA;
		printf("%.1f cup equals %.1f pint, %.1f ounce, %.1f spoon, %.1f tea_spoon.\n",
			cup, pint, ounce, spoon, tea_spoon);
	system("pause");
	return 0;
}