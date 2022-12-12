#include <stdio.h>
int main()
{
	int price = 0;
	printf("Please enter the price(enn): ");
	scanf("%d", &price);

	int change = 100 - price;

	printf("return your money%d(enn)\n", change);
}
