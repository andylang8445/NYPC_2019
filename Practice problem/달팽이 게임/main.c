#include<stdio.h>
//int arr[1024][1024];

int main()
{
	int n = 4, k=14;
	scanf("%d %d", &n, &k);
	int nc = n;
	n--;

	int num = 1;
	int decrease = 1;

	int vertical_num = 0;
	int horizontal_num = 0;
	//printf("aa");

	//printf("%d %d", n, k);
	for (; num <= (nc * nc); decrease++)
	{
		//printf("\nnum: %d\n",num);
		for (; horizontal_num <= (n - decrease); num++, horizontal_num++)
		{
			//arr[horizontal_num][vertical_num] = num;
			if (num == k)
			{
				printf("%d %d", horizontal_num + 1, vertical_num + 1);
				return 0;
			}
			//printf("%da ", num);
		}
		for (; vertical_num <= (n - decrease); num++, vertical_num++)
		{
			//arr[horizontal_num][vertical_num] = num;
			if (num == k)
			{
				printf("%d %d", horizontal_num + 1, vertical_num + 1);
				return 0;
			}
			//printf("%db ", num);
		}
		for (; horizontal_num >= decrease; horizontal_num--, num++)
		{
			//arr[horizontal_num][vertical_num] = num;
			if (num == k)
			{
				printf("%d %d", horizontal_num + 1, vertical_num + 1);
				return 0;
			}
			//printf("%dc ", num);
		}
		for (; vertical_num >= decrease; vertical_num--, num++)
		{
			//arr[horizontal_num][vertical_num] = num;
			if (num == k)
			{
				printf("%d %d", horizontal_num + 1, vertical_num + 1);
				return 0;
			}
			//printf("%dd ", num);
		}
		vertical_num++;
		horizontal_num++;
		if (num == nc * nc)
		{
			//arr[horizontal_num][vertical_num] = num;
			if (num == k)
			{
				printf("%d %d", horizontal_num + 1, vertical_num + 1);
				return 0;
			}
			//break;
		}
		/*if (decrease - 1 > num)
		{
			printf("bb");
			break;
		}*/
	}
	/*printf("\n\n");
	for (int i = 0; i < n+2; i++)
	{
		for (int j = 0; j < n+2; j++)
			printf("%3d ", arr[j][i]);
		printf("\n");
	}*/
	return 0;
}
