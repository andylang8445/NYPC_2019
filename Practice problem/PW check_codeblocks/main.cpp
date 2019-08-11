#include<stdio.h>
int main()
{
    int length=0;
    char input[108];
    char white_list[32]={'!','@','#','$','%','^','&','*','(',')','-','=','_','+','\\','|',';',':','"','/','?',',','.','<','>','~','[',']','{','}','`'};
    bool cap_check=false;
    bool lower_check=false;
    bool num_check=false;
    bool white_list_check=false;

    for(int i=0;i<100;i++)
    {
        scanf("%c",&input[i]);

        for(int j=0;j<32;j++)
        {
            if(white_list[j]==input[i])
                white_list_check=true;
        }
        length=i;
        if(input[i]=='\n')
        {
            break;
        }
        else if(input[i]>='a'&&input[i]<='z')
        {
            lower_check=true;
        }
        else if(input[i]>='A'&&input[i]<='Z')
        {
            cap_check=true;
        }
        else if(input[i]>='0'&&input[i]<='9')
        {
            num_check=true;
        }
        else if(white_list_check==false)
        {
            printf("invalid1");
            return 0;
        }
    }
    if(length>15||length<8||(lower_check*cap_check*num_check==false))
    {
        printf("invalid");
        return 0;
    }
    else
        printf("valid");
    return 0;
}
