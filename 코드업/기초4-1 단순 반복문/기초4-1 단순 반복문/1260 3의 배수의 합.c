#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int i, a, b  , sum = 0;
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}

	}
	printf("%d", sum);



}