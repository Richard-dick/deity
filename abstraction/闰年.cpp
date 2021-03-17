#include<stdio.h>
int main()
{
    int x,y;
    int i;  
    int num=0;
    scanf("%d%d",&x,&y);
    for(i=x ;i<=y ;i++)
    {
        if( (i%100!=0&&i%4==0) || i%400==0 )
        num++;  
    }
    printf("%d\n",num);
    for(i=x ;i<=y ;i++)
    {
     	if( (i%100!=0&&i%4==0) || i%400==0 ) 
     	printf("%d ",i);   
    }
    return 0;
}
