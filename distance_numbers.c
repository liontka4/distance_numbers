#include <stdio.h>

void distance_numbers(int a, int b)
{
	if(a != b)
	{
		printf("%d ", a);
		if(a < b)
			a++;
		else
			a--;
		return distance_numbers(a, b);
	}
	else
	{
		printf("%d ", b);
		return;
	}
	
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	distance_numbers(a, b);
	return 0;
}
