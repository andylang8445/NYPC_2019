#include<stdio.h>
unsigned long long int cnt = 0;
int main()
{
	unsigned long long int a, b;
	scanf_s("%lld %lld", &a, &b);
	for (unsigned long long int i = 1; i <= b; i++)
	{
		for (unsigned long long int j = 1; j <= (b / i); j++)
		{
			if ((i * j) >= a && (i * j) <= b)
				cnt++;
		}
	}
	printf("%lld", cnt);
	return 0;
}