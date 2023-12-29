#include<stdio.h>
long factorial(int n)
{
	int i, fact=1;
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
}
int main()
{
	int n;
	factorial(n);
	return 0;
}
