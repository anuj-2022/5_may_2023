#include<stdio.h>

int main()
{
	int i,j,data=0;
	printf("Enter the data and position\n");
	scanf("%d%d",&data,&i);
	data=data | (1<<i);

	printf("data is %d\n",data);
	return 0;
}
