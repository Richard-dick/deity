#include<stdio.h>
int main()
{
	int maxn[10];
	int i, j, x, y;
	for(i=0;i<10;i++)
	{
		scanf("%d", &maxn[i]);
	} 
	
	for(i=1;i<10;i++)
	{
		y = maxn[i];
		x = i -1;
		while((x>=0) && (y < maxn[x]))
		{
			maxn[x+1]=maxn[x];
			x--;
		}
		maxn[x+1] = y;
	 } 
	
	
	
	
	
	
		for(i=0;i<10;i++)
	{
		printf("%d ", maxn[i]);
	}
	 return 0;
}

