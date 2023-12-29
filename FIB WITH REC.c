#include<stdio.h>
long fibonacci(int n)
{
	int i;
	int a=0, b=1;
	int c=a+b;
	printf("%d %d ", a, b);
	for(i=1;i<=n;i++)
	{
		printf("%d ", c);
		a=b;
		b=c;
		c=a+b;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	fibonacci(n);
	return 0;
}
