#include<stdio.h>

int main()
{
	int i=0;
	i = getchar();
	if(i <=96){
		i=i+32;
		putchar(i);
	} else {
		i = i - 32;
		putchar(i);
	}
	return 0;
}
