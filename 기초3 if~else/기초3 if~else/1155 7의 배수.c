#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	scanf("%d", &a);

	if (a % 7 == 0)
	{
		printf("multiple");
	}
	else
		printf("not multiple");
	
}