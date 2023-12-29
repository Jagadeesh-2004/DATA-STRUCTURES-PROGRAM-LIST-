#include<stdio.h>
int main()
{
	int i, n;
	scanf("%d", &n);
	int t1=0, t2=1;
	int nextTerm=t1+t2;
	printf("%d %d ", t1, t2);
	for(i=1;i<=n;i++)
	{
		printf("%d ", nextTerm);
		t1=t2;
		t2=nextTerm;
		nextTerm=t1+t2;
		
	}
	return 0;
}
