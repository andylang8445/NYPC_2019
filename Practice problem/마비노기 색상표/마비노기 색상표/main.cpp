#include<stdio.h>
#include<math.h>
int map[32][32];
int loc[2][32];
int n, size, d;
int distance(int x1, int y1, int x2, int y2)
{
	return (int)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int locater(int k)
{
	int check = 0;
	if (k == n)
	{
		for (int i = 0; i < n; i++)
			printf("%d %d\n", loc[0][i], loc[1][i]);
		printf("END");
		while (1);
		return 0;
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			if (k == 0)
			{
				loc[0][k] = i;
				loc[1][k] = j;
				locater(k + 1);
			}
			else
			{
				for (int l = 0; l < k; l++)
				{
					if (distance(loc[0][l], i, loc[1][l], j) >= d)
					{
						locater(k + 1);
					}
				}
			}
		}
	}
}
int main()
{
	scanf_s("%d %d %d", &n, &size, &d);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			map[i][j] = 0;
		}
	}

}