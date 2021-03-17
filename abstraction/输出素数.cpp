#include<stdio.h> 

int main()
{
	int a, b, c, num=0;
	scanf("%d %d", &a, &b);
	
	for( int i = a; i<=b; i++)
	{
		for(int n=2; n<i; n++)
		{
			if(i%n ==0)
			{
				c=0;
				break;
			}else if(i%n != 0)
			{
				c=1;
			}
		}
		if(c == 1){
			printf("%d\n", i);
			num++;
		}else if( c!=0){
			break;
		}
	}
	printf("从%d到%d内的素数有%d个，如上所示\n", a, b, num);
	return 0;
}
