#include<stdio.h> 

int main()
{
	int a, b, n, m=1, e=0;
	scanf("%d",&a);
	b=a;
	while(b>0){
		b /= 10;
		e++;
	}
	while(e>1){
		m *= 10;
		e--;
	}
	//printf("%d", m);
	do{
		printf("%d ",a/m);
		a = a%m;
		m /= 10;
	} while(m>0);
	return 0;
}
