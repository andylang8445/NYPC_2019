//정렬 알고리즘 개선시 100점 가능
#include<stdio.h>
#include<stdlib.h>
int location[2][100008];
int range[2][100008];
int main()
{
	int n, e, cnt = 0;
	int initial_chk = 0;
	int temp_range[2];
	int tempa, tempb;
	scanf_s("%d %d", &n, &e);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &location[0][i], &location[1][i]);
	}
	/*for (int i = 0; i < n-1; i++)//순차 정렬
	{
		for (int j = i + 1; j < n; j++)
		{
			if (location[0][i] > location[0][j])
			{
				tempa = location[0][i];
				tempb = location[1][i];
				location[0][i] = location[0][j];
				location[1][i] = location[1][j];
				location[0][j] = tempa;
				location[1][j] = tempb;
			}
		}
	}*/
	for (int i = 0; i < n - 1; i++)//버블 정렬
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (location[0][j] > location[0][j + 1])
			{
				int temp = location[0][j];
				location[0][j] = location[0][j + 1];
				location[0][j + 1] = temp;

				temp = location[1][j];
				location[1][j] = location[1][j + 1];
				location[1][j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		range[0][i] = location[1][i] - e;
		range[1][i] = location[1][i] + e;
		if (initial_chk == 0)
		{
			initial_chk = 1;
			temp_range[0] = range[0][i];
			temp_range[1] = range[1][i];
			cnt++;
		}
		else if (range[0][i] <= temp_range[1] && range[1][i] >= temp_range[0])
		{
			if (range[0][i] > temp_range[0])
				temp_range[0] = range[0][i];
			if (range[1][i] < temp_range[1])
				temp_range[1] = range[1][i];
		}
		else
		{
			temp_range[0] = range[0][i];
			temp_range[1] = range[1][i];
			cnt++;
		}
	}
	printf("%d", cnt);
}