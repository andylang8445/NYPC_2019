#include<stdio.h>
int main()
{
    int n;
    int material[128];
    int required[128];
    int min;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&material[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&required[i]);
    }
    if (required[0]!=0)
        min=(int)(material[0]/required[0]);
    for(int i=0;i<n;i++)
    {
        //printf("min: %d\n",min);
        if(required[i]==0);
        else if(min>(int)(material[i]/required[i]))
        {
            min=(int)(material[i]/required[i]);
        }
    }
    /*for(int i=0;i<n;i++)
    {
        printf("have:%d, required:%d\n",material[i],required[i]);
    }*/
    printf("%d",min);
    return 0;
}
