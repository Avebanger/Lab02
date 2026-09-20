#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n = 10, k = 30;
	printf("Сейчас %d часов %d минут 00 секунд\n", n,k);
	printf("Идет %d минута суток\n",k);
	printf("До полуночи осталось %d часов и %d минут\n", 24-n,60-k);
	printf("С 8.00 прошло %d секунд\n", (10 * 3600 + 30 * 60)-(8*3600));
	float N = n, K = k;
	printf("Текущий час  = %1.2f суток и текущая минута =  %1.2f часа\n", N/24, K/60);
}