#include <stdio.h>
int main()
{
	int a, b, t;
	a = 5, b = 6;
	t = a;
	a = b;
	b = t;

	printf("a = %d, b = %d\n", a, b);
}
