#include<stdio.h>
char email_Address[108][108];
int email_check[108];
int main()
{
	//이메일 문자: A~Z, a~z,0~9,.,-
	int else_check;
	int n;
	int at_num = 0;
	scanf("%d ", &n);
	for (int i = 0; i < n; i++)
	{
		email_check[i] = 0;

		else_check = 0;
		at_num = 0;

		gets(email_Address[i]);
		for (int j = 0; email_Address[i][j] != NULL; j++)
		{
			//printf("%c", email_Address[i][j]);
			if (email_Address[i][j] == '@'&&j!=0&&email_Address[i][j+1] != NULL)
			{
				at_num++;
			}
			else if (email_Address[i][j] == '.')
			{
			}
			else if (email_Address[i][j] == '-')
			{
			}
			else if (email_Address[i][j] >= 'A' && email_Address[i][j] <= 'Z')
			{
			}
			else if (email_Address[i][j] >= 'a' && email_Address[i][j] <= 'z')
			{
			}
			else if(email_Address[i][j] >= '0' && email_Address[i][j] <= '9')
            {
            }
			else
				else_check = 1;
		}
		if (else_check == 0 && at_num == 1)
		{
			email_check[i] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
	    /*for (int j = 0; email_Address[i][j] != NULL; j++)
		{
			printf("%c", email_Address[i][j]);
		}*/
		if (email_check[i] == 1)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}
