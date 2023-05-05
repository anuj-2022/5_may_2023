#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,a=0,bin[32];
	printf("Enter the number :\n");
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		bin[i]=n%2;
		n=n/2;
	}
	for(i;i>=0;i--)
		printf("%d",bin[i]);
	return 0;
}
