#include<stdio.h>
int main()
{
	int a=4;
	printf("a+=5 is %d", a+=5);
	printf("\n a-=6 is %d", a-=6);
	printf("\n a*=7 is %d", a*=7);
	printf("\n a%=2 is %d", a%=2);
	printf("\n a/=3 is %d", a/=3);
}
/* Output
a+=5 is 9
 a-=6 is 3
 a*=7 is 21
 a%=2 is 1
 a/=3 is 0
*/
