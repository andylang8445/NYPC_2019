#include<stdio.h>
int cabinet[16];
int main()
{
	int n, m, location;
	int r, next;
	int buy = 0;
	scanf_s("%d %d %d", &n, &m, &location);
	for (int i = 0; i < n; i++)
		cabinet[i] = 0;
	for (int i = 0; i < m; i++)
	{
		scanf_s("%d %d", &next, &r);
		if (r == 1)
		{
			if (cabinet[location] == 0)
			{
				cabinet[next]++;
				buy++;
			}
			else
			{
				cabinet[location]--;
				cabinet[next]++;
			}
		}
		location = next;
	}
	printf("%d", buy);
	return 0;
}