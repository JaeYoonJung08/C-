#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a , b;
	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
	{
		printf("礎熱");
		if (b % 2 == 0)
		{
			printf("+礎熱=");
			if ((a + b) % 2 == 0)
			{
				printf("礎熱");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("�汝�");
			}
		}
		else if (b % 2 == 1)
		{
			printf("+�汝�=");
			if ((a + b) % 2 == 0)
			{
				printf("礎熱");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("�汝�");
			}
		}
	}
	else if (a % 2 == 1)
	{
		printf("�汝�");
		if (b % 2 == 0)
		{
			printf("+礎熱=");
			if ((a + b) % 2 == 0)
			{
				printf("礎熱");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("�汝�");
			}
		}
		else if (b % 2 == 1)
		{
			printf("+�汝�=");
			if ((a + b) % 2 == 0)
			{
				printf("礎熱");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("�汝�");
			}
		}
	}
}