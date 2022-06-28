#include<stdio.h>
main()
{
	int i,s=0,n;
	printf("enter the integer");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s = s + i;
	}
	printf("%d",s);
}
/* Output
enter the integer 5
15
