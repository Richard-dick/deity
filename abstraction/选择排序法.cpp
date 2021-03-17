#include<stdio.h>
int main()
{
	int maxn[10];
	int i, j, x, y;
	for(i=0;i<10;i++){
		scanf("%d", &maxn[i]);
	} 
	
	for(i=0;i<9;i++){
		x=i;
		y=maxn[i];
		for(j=i+1;j<10;j++){
			if(y>maxn[j]){
				x=j;
				y=maxn[j];
			}
		}
		maxn[x]=maxn[i];
		maxn[i]=y;
	}
	for(i=0;i<10;i++){
		printf("%d\n", maxn[i]);
	}
	return 0;
 } 
