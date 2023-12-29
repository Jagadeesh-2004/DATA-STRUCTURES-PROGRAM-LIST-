#include<stdio.h>
int main()
{
	int i, n, fact = 1;
	scanf("%d", &n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("THE FACTORIAL OF %d IS %d", n, fact);
	}
	else
	printf("ERROR");
	return 0;
}
