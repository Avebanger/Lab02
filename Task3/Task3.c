#include <stdio.h>
#include <locale.h>
int main()
{
	float L=433, n=4;
	int k=3,m=1;//k - целая часть, m - Дробная
	setlocale(LC_CTYPE, "RUS");
	printf("Дано:\n\t%1.0f\n\t%1.0f\n\t_________\nОтвет:\n\t%+-3.1f", n, L, n/L);
}