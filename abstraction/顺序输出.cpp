#include<stdio.h>
#include<math.h>

int main()
{
	int n, m, t, e=0;
	
	scanf("%d", &n);
	
	t=n;
	while( t > 0)
	{
		e++;
		t = t/10;
	}
	
	m = 10^e; 
	
	printf("%d", m);
	
}
