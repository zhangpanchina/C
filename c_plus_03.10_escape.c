#include <stdio.h>
int main(void)
{
	float f_salary;

	printf("\aEnter you desired monthly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &f_salary);
	printf("\n\t$%.2f a month is $%.2f a year.", f_salary, f_salary * 12.0);
	printf("\rGee!\n");

	return 0;

}
