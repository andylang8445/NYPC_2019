#include<stdio.h>
char email_Address[108][108];
bool email_check[108];
int main()
{
	//이메일 문자: A~Z, a~z,0~9,.,-
	bool check_at;
	bool check_dot;
	bool else_check;
	bool cap_check;
	bool lower_check;
	bool dash_check;
	int n;
	int at_num = 0;
	scanf_s("%d ", &n);
	for (int i = 0; i < n; i++)
	{
		email_check[i] = false;

		check_at = false;
		check_dot = false;
		else_check = false;
		cap_check = false;
		lower_check = false;
		dash_check = false;
		at_num = 0;

		gets_s(email_Address[i]);
		for (int j = 0; email_Address[i][j] != NULL; j++)
		{
			//printf("%c", email_Address[i][j]);
			if (email_Address[i][j] == '@')
			{
				check_at = true;
				at_num++;
			}
			else if (email_Address[i][j] == '.')
			{
				check_dot = true;
			}
			else if (email_Address[i][j] == '-')
			{
				dash_check = true;
			}
			else if (email_Address[i][j] >= 'A' && email_Address[i][j] <= 'Z')
			{
				cap_check = true;
			}
			else if (email_Address[i][j] >= 'a' && email_Address[i][j] <= 'z')
			{
				lower_check = true;
			}
			else
				else_check = true;
		}
		if (else_check == false && check_at == true && at_num == 1)
		{
			email_check[i] = true;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (email_check[i] == true)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}