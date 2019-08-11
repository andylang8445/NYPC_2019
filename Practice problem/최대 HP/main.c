#include<stdio.h>
int main()
{
    int hp;
    int n,type;
    int turn;
    int max_hp;

    scanf("%d %d",&hp,&turn);
    for(int i=0;i<turn;i++)
    {
        scanf("%d %d",&type,&n);
        if(type==1)
            hp-=n;
        else if(type==2||type==3)
            hp+=n;
        if(type==3)
            max_hp=hp;
    }
    printf("%d",max_hp);
}
