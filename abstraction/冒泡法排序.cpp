#include<stdio.h>
int main()
{
	int maxn[10];
	int i, j,  y;
	for(i=0;i<10;i++){
		scanf("%d", &maxn[i]);
	}
	for(i=1;i<10;i++){
		for(j=9;j>=1;j--){
			if(maxn[j]<maxn[j-1]){
				y=maxn[j-1];
				maxn[j-1]=maxn[j];
				maxn[j]=y;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d ", maxn[i]);
	}
	 return 0;
}
