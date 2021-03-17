#include<stdio.h>
int main()
{
	int m, n = 0 ;
	
	scanf("%d", &m);
	n++;
	m = m/10;
	while( m > 0)
	{
		n++;
		m = m/10;
	}
	printf("这个数位数是：%d\n", n);
	return 0;
	
}



















































